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

short CapitalLettersCount(const string &String)
{
    short CapitalLetters = 0;

  for(short i=0;i<String.length();i++)
  {
    if(String[i] != ' ')
    {
      if(isupper(String[i]))
      {
         CapitalLetters++;
      }
    }
  }
  return CapitalLetters;
}

int main()
{ 
  string String = ReadString();

  cout<<"\nThis string's Length is "<<String.length()<<" and capital Numbers in it is : "<<CapitalLettersCount(String);

}