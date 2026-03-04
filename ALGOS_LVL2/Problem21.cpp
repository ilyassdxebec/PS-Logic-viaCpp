#include<iostream>
using namespace std;

enum enCharType{SmallLetter,CapitalLetter,Digit,SpecialCharacter};

int ReadPositiveNumber(string message){
    int number;
    do{
        cout << endl << message;
        cin >> number;
    } while(number <= 0);
    return number;
}

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
string GenerateWord(enCharType CharType, short length){
  string word = "";
    for(int i=1;i<=length;i++){
        word=word+GetRandomCharacter(CharType);
    }
    return word;
}
string GenerateKey(){
    string key = "";
    key=key+GenerateWord(CapitalLetter,4)+"-";
    key=key+GenerateWord(CapitalLetter,4)+"-";
    key=key+GenerateWord(CapitalLetter,4)+"-";
    key=key+GenerateWord(CapitalLetter,4);
    return key;
}
void GenerateKeys(int number){
  for(int i=1;i<=number;i++){
    cout<<"Key["<<i<<"]: "<<GenerateKey()<<endl;
  }
}

int main(){
    srand((unsigned)time(NULL));
  GenerateKeys(ReadPositiveNumber("please enter number of keys to generate: "));
}