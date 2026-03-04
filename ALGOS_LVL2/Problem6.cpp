#include<iostream>
#include<string>
using namespace std;

int ReadPositiveNumber(string message){
    int number;
    do{
        cout << endl << message;
        cin >> number;
    } while(number <= 0);
    return number;
}
int CalculateSumOfDigits(int number){
    int remainder,sum=0;
   while(number>0){
     remainder = number%10;
     sum+=remainder;
     number /= 10;
   }
   return sum;
}
int main(){
    
      int sum = CalculateSumOfDigits(ReadPositiveNumber("Please enter a number:"));
    cout << endl << "Sum of digits = " << sum;
}