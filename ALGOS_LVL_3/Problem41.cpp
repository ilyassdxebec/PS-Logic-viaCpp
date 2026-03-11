#include<iostream>
#include<vector>
#include<string>
using namespace std;

string ReadString()
{
 string S;

 cout<<"Please enter a string : ";

 getline(cin,S);

 return S;
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

string ReverseString(string S)
{
  string delim = " ";
  string reversed = "";
  vector<string>vWords = SplitString(S);
  vector<string>::iterator iter = vWords.end();

  while(iter != vWords.begin())
  {
    --iter;
    reversed += *iter + delim;
  }

  return reversed.substr(0,reversed.length() - delim.length());
}

int main()
{
  string S = ReadString();

  cout<<"\n the reversed the string is : "<<ReverseString(S);
}