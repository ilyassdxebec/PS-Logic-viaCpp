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

void PrintStringWords(string S)
{
  string delim = " ";
  int pos = 0;
  string sWord;
   
  cout<<"\nHere are string words seperated : "<<endl;

  while((pos = S.find(delim)) != string::npos)
  {
    sWord = S.substr(0,pos);

    if(sWord != "")
    {
      cout<<sWord<<endl;
    }

    S.erase(0,pos+delim.length());
  }

  if(S != "")
  {
    cout<<S<<endl;
  }
}

int main()
{
  PrintStringWords(ReadString());

  system("pause>0");
}