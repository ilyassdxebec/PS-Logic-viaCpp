
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
int ReverseNumber(int number){
    int reversed=0,remainder;
   while(number>0){
     remainder = number%10;
     reversed = reversed*10+remainder;
     number /= 10;
   }
   return reversed;
}
int main(){
    int reversed =ReverseNumber(ReadPositiveNumber("Please enter a number: "));
    cout<<"Reverse is: "<<reversed;
}
