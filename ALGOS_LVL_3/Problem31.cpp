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

char ReadLetter()
{
 char Letter;
 cout<<"\nPlease enter a letter?";
 cin>>Letter;
 return Letter;
}

short LetterCount(const string &String ,char Letter ,bool MatchCase = true)
{
    short LetterCount = 0;

  for(short i=0;i<String.length();i++)
  {

   if(MatchCase)
   {
    if(String[i] == Letter)
    {
      LetterCount++;
    }
   }
   else 
   {
    if(tolower(String[i]) == tolower(Letter))
    {
        LetterCount++;
    }
   }

  }
  return LetterCount;
}

int main()
{ 
  string String = ReadString();

  char Letter = ReadLetter();

  cout<<"\nin the string the letter '"<<Letter<<"' is repeated "<<LetterCount(String,Letter)<<" times matching case!";
 
  cout<<"\nin the string the letter '"<<Letter<<"' is repeated "<<LetterCount(String,Letter,false)<<" times regardless of case!";

}