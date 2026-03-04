#include<iostream>
using namespace std;

int ReadPositiveNumber(string message){
    int number;
    do{
        cout << endl << message;
        cin >> number;
    } while(number <= 0);
    return number;
}

int DigitFrequency(int number,short digit){
    int frequency = 0,remainder;
    while(number>0){
     remainder = number%10;
     if(remainder==digit){
        frequency++;
     }
     number =number/10;
    }
    return frequency;
}

int main(){
  int number = ReadPositiveNumber("Please enter a number: ");
  short digit = ReadPositiveNumber("Please enter a digit: ");

  cout<<"\nDigit "<<digit<<"'s frequency in "<<number<<" is: "<<DigitFrequency(number,digit)<<" times";
}