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

vector <string> SplitString(string S ,string delim = " ")
{   
    vector <string> vWords;
    int pos = 0 ;
    string sWord;

    while((pos = S.find(delim)) != string::npos)
    {
     sWord = S.substr(0,pos);

     if(sWord != "")
     {
       vWords.push_back(sWord);
     }
     S.erase(0,pos+delim.length());
    }
    if(S != "")
    {
      vWords.push_back(S);
    }
    
    return vWords;
}

void PrintVector(const vector <string> &vWords)
{ 
    int tokens = 0;
    
    cout<<"\nVector Elements are :"<<endl;

   for(const string &x : vWords)
   {
    cout<<x<<endl;
    tokens++;
   }
   
   cout<<"tokens : "<<tokens;
}

int main()
{
    string S = ReadString();
    
    PrintVector(SplitString(S));
}