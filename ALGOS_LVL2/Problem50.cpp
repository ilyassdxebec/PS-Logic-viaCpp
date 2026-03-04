#include<iostream>
#include<cmath>
using namespace std;

float MySqrt(float number){
    return pow(number,0.5);
}
float ReadNumber(string message){
    float number;
        cout << endl << message;
        cin >> number;
    return number;
}
int main(){
 float number = ReadNumber("Please enter a number: ");
 cout<<endl<<"My sqrt function result: "<<MySqrt(number);
 cout<<endl<<"C++ sqrt result:"<<sqrt(number);
}