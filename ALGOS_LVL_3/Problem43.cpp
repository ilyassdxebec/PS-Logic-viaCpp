#include<iostream>
#include<vector>
#include<string>
#include<cctype>
using namespace std;

string ReadString()
{
 string S;

 cout<<"Please enter a string : ";

 getline(cin,S);

 return S;
}

string JoinString(const vector<string>&vString,string delim = " ")
{   
    string Joined = "";
    
    for(const string &x : vString)
    {
      Joined = Joined + x + delim;
    }
   
    return Joined.substr(0,Joined.length()-delim.length());
}

vector<string> SplitString(string S ,string delim = " ")
{

  vector<string>vWords;
  int pos = 0;
  string word;

  while((pos = S.find(delim)) != string::npos)
  {
    word = S.substr(0,pos);

    if(word != "")
    {
      vWords.push_back(word);
    }
    S.erase(0,pos+delim.length());
  }
  if(S != "")
  {
    vWords.push_back(S);
  }
  
  return vWords;
}

string tolowe(string S)
{
 for(char &c : S)
 {
   c = tolower(c);
 }
 return S;
}

string ReplaceWordsInString(string S ,string Old ,string New ,bool MatchCase = true)
{
  vector<string>vWords = SplitString(S);
  
  for(string &s : vWords)
  {
    if(MatchCase)
    {
      if(s == Old)
      {
        s = New;
      }
    }
    else
    {
      if(tolowe(s) == tolowe(Old))
      {
        s = New;
      }
    }
  }
   
  return JoinString(vWords);
}

int main()
{
  string S = ReadString();  

  cout<<"\nReplacing String words CaseSensitive : "<<ReplaceWordsInString(S,"ilyass","goat")<<endl;

  cout<<"Replacing String words CaseInSensitive : "<<ReplaceWordsInString(S,"ilyass","goat",false);
}