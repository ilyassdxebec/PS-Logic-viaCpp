#include<iostream>
#include<cctype>
using namespace std;

char ReadLetter()
{
    char Letter;
  cout<<"Please enter a letter to invert : ";
  cin>>Letter;
  return Letter;
}

char InvertLetterCase(char Letter)
{
 return (isupper(Letter)) ? tolower(Letter) : toupper(Letter);
}

int main()
{ 
  char Letter = ReadLetter();

  Letter = InvertLetterCase(Letter);

  cout<<endl<<Letter;
}