#include<iostream>
#include<cctype>
using namespace std;

string TakeString()
{
  string S;
  cout<<"Please enter a string : ";
  getline(cin,S);
  return S;
}

void LowCaseString(string &S)
{
  for(short i=0;i<S.length();i++)
  {
     if(S[i] != ' ')
     {
       S[i] = tolower(S[i]);
     }
  }
}

void UpperCaseString(string &S)
{
  for(short i=0;i<S.length();i++)
  {
     if(S[i] != ' ')
     {
       S[i] = toupper(S[i]);
     }
  }
}

int main()
{
    string String = TakeString();

  LowCaseString(String);
  
  cout<<"\nString To LowerCase : "<<String;

  UpperCaseString(String);

  cout<<"\nString To UpperCase : "<<String;

}