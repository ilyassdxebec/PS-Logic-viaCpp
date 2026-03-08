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

int CountVowelInString(const string String)
{
    int Counter = 0;

   for(short i=0;i<String.length();i++)
   {
     if(String[i] != ' ')
     {
       if(isVowel(String[i]))
       {
           Counter++;
       }
     }
   }
   return Counter;
}

int main()
{ 
    string String = ReadString();
    
    cout<<"\nNumber of Vowels in this string is : "<<CountVowelInString(String);
 }