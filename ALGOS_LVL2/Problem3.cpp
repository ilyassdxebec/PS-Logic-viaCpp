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
void PrintResult(int number){
  if(CheckIsPerfect(number)) cout<<endl<<number<<" is perfect";
  else cout<<endl<<number<<" is not perfect";
}
int main(){
  PrintResult(ReadPositiveNumber("Please enter a number and we'll check if it's perfect or not: "));
}