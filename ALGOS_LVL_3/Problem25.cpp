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

void LowCaseFirstLetters(string &S)
{
    bool isFirstLetter = true;

  for(short i=0;i<S.length();i++)
  {
     if(isFirstLetter && S[i] != ' ')
     {
       S[i] = tolower(S[i]);
     }
     isFirstLetter = (S[i] == ' ') ? true : false ;
  }
}

int main()
{
    string String = TakeString();

  LowCaseFirstLetters(String);

  cout<<endl<<String;
}