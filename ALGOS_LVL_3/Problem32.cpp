#include<iostream>
#include<cctype>
using namespace std;

char ReadLetter()
{
 char Letter;
 cout<<"\nPlease enter a letter?";
 cin>>Letter;
 return Letter;
}

bool isVowel(char Letter)
{
  Letter = tolower(Letter);

  return (Letter == 'a' || Letter == 'e' || Letter == 'u' || Letter == 'i' || Letter == 'o');
}

int main()
{ 
  char Letter = ReadLetter();
  
  if(isVowel(Letter))
  {
    cout<<"\nYes, "<<Letter<<" is a vowel";
  }
  else {
    cout<<"\nNo, "<<Letter<<" no it's not a vowel"; 
  }
 }