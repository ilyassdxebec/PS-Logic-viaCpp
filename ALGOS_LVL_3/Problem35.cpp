#include<iostream>
#include<cctype>
using namespace std;

string ReadString ()
{
  string String;

  cout<<"Please enter a string : ";

  getline(cin,String);

  return String;
}

bool isVowel(char Letter)
{
  Letter = tolower(Letter);

  return (Letter == 'a' || Letter == 'e' || Letter == 'u' || Letter == 'i' || Letter == 'o');
}

void CountVowelInString(const string &String)
{

   for(short i=0;i<String.length();i++)
   {
     if(String[i] != ' ')
     {
       if(isVowel(String[i]))
       {
        cout<<String[i]<<" ";
       }
     }
   }
}

int main()
{ 
    string String = ReadString();
    
    cout<<"Vowels in that string are : ";

    CountVowelInString(String);
}