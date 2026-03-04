#include<iostream>
using namespace std;

enum enPrime{Prime,NotPrime};

enPrime CheckNumberType(int num){
    if(num <= 1) return enPrime::NotPrime; 
   int mid=num/2;
   for(int i=2;i<=mid;i++){
      if(num%i==0){
        return enPrime::NotPrime;
      }
   }
   return enPrime::Prime;
}
int ReadPositiveNumber(string message){
    int number;
    do{
        cout << endl << message;
        cin >> number;
    } while(number <= 0);
    return number;
}
void PrintPrimeNumbers(){
 int number = ReadPositiveNumber("Please enter a \"positive\" number and we'll print all prime numbers from 1 to it: ");
   for(int i=1;i<=number;i++){
        if(CheckNumberType(i)==enPrime::Prime) cout<<i<<endl;   
   }
}

int main(){
   PrintPrimeNumbers();
}