#include<iostream>
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

string RemovePunctuations(string S)
{
    string S2 = "";

 for(short i=0;i<S.length();i++)
 {
   if(!(ispunct(S[i])))
   {
    S2 += S[i];
   }
 }

  return S2;
}

int main()
{
 string S =ReadString();

 cout<<"\nthe string after removing all punctuations is : "<<RemovePunctuations(S);
}