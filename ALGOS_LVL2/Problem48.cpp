#include<iostream>
#include<cmath>
using namespace std;

float ReadNumber(string message){
    float number;
        cout << endl << message;
        cin >> number;
    return number;
}
float FractionPart(float number){
    return number-(int)number;
}
int MyFloor(float number){
  if((number)>=0) return (int)number;
  else if(number<0){
    if(FractionPart(number)!=0)return (int)number-1;
    else return (int)number;
  }
}
int main(){
float number = ReadNumber("Please enter a number: ");
cout<<endl<<"My floor function result: "<<MyFloor(number);
cout<<endl<<"C++ floor result: "<<floor(number);
}