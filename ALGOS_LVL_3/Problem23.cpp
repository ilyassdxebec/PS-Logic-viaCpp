#include<iostream>
using namespace std;

string TakeString()
{
  string S;
  cout<<"Please enter a string : ";
  getline(cin,S);
  return S;
}

void PrintFirstLetters(string S)
{
    bool isFirstLetter = true;

  for(short i=0;i<S.length();i++)
  {
     if(isFirstLetter && S[i] != ' ')
     {
       cout<<S[i]<<endl;
     }
     isFirstLetter = (S[i] == ' ') ? true : false ;
  }
}

int main()
{
  PrintFirstLetters(TakeString());
}