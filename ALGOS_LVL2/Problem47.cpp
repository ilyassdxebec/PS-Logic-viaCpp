#include<iostream>
#include<cmath>
using namespace std;

float ReadNumber(string message){
    float number;
        cout << endl << message;
        cin >> number;
    return number;
}
float AbsoluteValueOfNumber(float number){
    if (number>=0) return number;
    else return -number;
}
float FractionPart(float number){
    return number-(int)number;
}
int MyRound(float number){

  int IntPart = (int)number;
  float fractionPart = FractionPart(number);

  if(AbsoluteValueOfNumber(fractionPart)>=.5){

    if(number>=0) return ++IntPart;
              else return --IntPart;
     }
     else return IntPart;
}
int main(){

  float number = ReadNumber("Please enter a number: ");

  cout<<endl<<"My Round Result: "<<MyRound(number);
  cout<<endl<<"C++ Round Result: "<<round(number);
}