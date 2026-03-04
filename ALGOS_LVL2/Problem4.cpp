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

bool CheckIsPerfect(int number){
  int sum=0;
  for(int i=1;i<number;i++){
    if(number%i==0){
        sum+=i;
    }
  }
  return sum==number;
}

void PrintAllPerfectNumbers(int number){
  for(int i=1;i<=number;i++){
    if(CheckIsPerfect(i)) cout<<i<<"\n";
  }
}

int main(){
  PrintAllPerfectNumbers(ReadPositiveNumber("enter a positive number and we'll give you all perfect numbers less than it: "));
}