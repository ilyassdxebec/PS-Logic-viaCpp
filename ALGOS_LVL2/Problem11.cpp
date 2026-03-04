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
bool isPalindromeNumber(int number){
    return (number==ReverseNumber(number));
}

int main(){
  if(isPalindromeNumber(ReadPositiveNumber("Please enter a positive number: "))){
     cout<<endl<<"Yes, it's a palindrome number!";
  } else cout<<endl<<"No, it's not a palindrome number!";
}