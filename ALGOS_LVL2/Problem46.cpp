#include<iostream>
using namespace std;

int ReadNumber(string message){
    int number;
        cout << endl << message;
        cin >> number;
    return number;
}
int AbsoluteValueOfNumber(int number){
    if (number>=0) return number;
    else return -number;
}
int main(){
  int number = ReadNumber("PLease enter a number: ");

  cout<<endl<<"My abs result is: "<<AbsoluteValueOfNumber(number);
  cout<<endl<<"C++ abs result is: "<<abs(number);
}