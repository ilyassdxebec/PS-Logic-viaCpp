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

string ReplaceSpecificWord(string S ,string OldWord ,string NewWord)
{
  int pos;

  while((pos = S.find(OldWord)) != string::npos)
  {
   S.replace(pos,OldWord.length(),NewWord);
  }
 return S;
}

int main()
{
 string S = ReadString();
 
 cout<<"\nString before replacing words : "<<S<<endl;

  cout<<"String after replacing words : "<<ReplaceSpecificWord(S,"ilyass","legend");
}