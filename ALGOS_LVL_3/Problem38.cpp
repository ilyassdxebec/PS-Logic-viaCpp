#include<iostream>
#include<string>
#include<vector>
using namespace std;

string ReadString()
{
 string S;
 
 cout<<"Please enter a string : ";
 getline(cin,S);

 return S;
}

string TrimLeft(string S)
{
   for(int i=0;i<S.length();i++)
   {
      if(S[i] != ' ')
      {
       return S.substr(i,S.length()-i);
      }
   }
   return "";
}

string TrimRight(string S)
{
   for(int i= S.length()-1;i>=0;i--)
   {
      if(S[i] != ' ')
      {
       return S.substr(0,i+1);
      }
   }
   return "";
}

string Trim(string S)
{
  return TrimRight(TrimLeft(S));
}

int main()
{
    string S = ReadString();
    
    cout<<"String without triming is : "<<S<<endl;

    cout<<"String trimed left is  : "<<TrimLeft(S)<<endl;

    cout<<"String trimed right is : "<<TrimRight(S)<<endl;

    cout<<"String trimed left and right is : "<<Trim(S);
}


