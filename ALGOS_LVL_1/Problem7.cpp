#include<iostream>
using namespace std;
int TakeNumber(){
   int num;
   cout<<"Enter your number: ";
   cin>>num;
   return num;
}
float DoOperation(int num){
  return (float) num/2;
}
void PrintResult(int num){
  string result = "\nHalf of "+ to_string(num)+" is "+to_string(DoOperation(num));
  cout<<result;
}
int main(){
   PrintResult(TakeNumber());
}