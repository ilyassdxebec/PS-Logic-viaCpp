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

char InvertLetterCase(char Letter)
{
 return (isupper(Letter)) ? tolower(Letter) : toupper(Letter);
}

void InvertStringLetters(string &S)
{
  for(short i=0;i<S.length();i++)
  {
     if(S[i] != ' ')
     {
       S[i] = InvertLetterCase(S[i]);
     }
  }
}

int main()
{ 
  string String = ReadString();

  InvertStringLetters(String);

  cout<<endl<<"String after Inverting all it's Letters : "<<String;

}