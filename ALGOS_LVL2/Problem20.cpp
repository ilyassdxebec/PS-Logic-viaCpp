#include<iostream>
using namespace std;
enum enCharType{SmallLetter,CapitalLetter,Digit,SpecialCharacter};

int RandomNumber(int from,int to){
  int RandomNumber = rand()%(to-from+1)+from;
  return RandomNumber;
}
char GetRandomCharacter(enCharType CharType){
  switch (CharType)
  {
    case SmallLetter:
    return char(RandomNumber(97,122));
      case CapitalLetter:
    return char(RandomNumber(65,90));
      case Digit:
    return char(RandomNumber(48,57));
      case SpecialCharacter:
    return char(RandomNumber(33,47));
    default:
    return 'F';
  }
}
int main(){
    srand((unsigned)time(NULL));

    cout<<GetRandomCharacter(SmallLetter)<<endl;
    cout<<GetRandomCharacter(CapitalLetter)<<endl;
    cout<<GetRandomCharacter(Digit)<<endl;
    cout<<GetRandomCharacter(SpecialCharacter)<<endl;
}