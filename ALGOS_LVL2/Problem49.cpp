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
int MyCeil(float number){
  if((number)>=0){
    if(FractionPart(number)!=0)return (int)number+1;
    else return (int)number;
  }
  else return (int)number;
}
int main(){
float number = ReadNumber("Please enter a number: ");
cout<<endl<<"My ceil function result: "<<MyCeil(number);
cout<<endl<<"C++ ceil result: "<<ceil(number);
}