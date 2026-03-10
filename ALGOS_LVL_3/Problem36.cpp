#include<iostream>
#include<string>
using namespace std;

string ReadString()
{
 string S;
 
 cout<<"Please enter a string : ";
 getline(cin,S);

 return S;
}

int CalculateStringWords(string S)
{
  string delim = " ";
  int pos = 0;
  string sWord;
  int NumOfWords = 0;

  while((pos = S.find(delim)) != string::npos)
  {
    sWord = S.substr(0,pos);

    if(sWord != "")
    {
      NumOfWords++;
    }

    S.erase(0,pos+delim.length());
  }

  if(S != "")
  {
    NumOfWords++;
  }
  
  return NumOfWords;
}

int main()
{
    string S = ReadString();
    
    cout<<"\nNumber of words in this string is : "<<CalculateStringWords(S);
}