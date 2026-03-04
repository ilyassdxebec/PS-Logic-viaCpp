#include<iostream>
using namespace std;
enum enOpType{Add = '+',Devide = '/',Subtract = '-',Multiply = '*'};
float TakeNumber(string message){
    float number;
    cout<<message;
    cin>>number;
    return number;
}
enOpType TakeOperationType(){
    char OpType;
    cout<<"\n Please enter operation type: ";
    cin>>OpType;
    return (enOpType)OpType;
}
float CalculateOperationOfTwoNumbers(float number1,float number2,enOpType OT){
    switch (OT)
    { 
       case Add:
       return number1+number2;
       case Subtract:
       return number1-number2;
       case Multiply:
       return number1*number2;
       case Devide:
       if(number2==0){
        cout<<"\ncan't devide by 0";
        return 0;
       }else return number1/number2;
       default:
       cout<<"\n operation type not recognized!";
       return 0;
    }
}
int main(){
  float number1 = TakeNumber("Please enter the first number: ");
  float number2 = TakeNumber("\nPlease enter the second number: ");
  enOpType OT = TakeOperationType();
  cout<<number1<<" "<<(char)OT<<" "<<number2<<" is "<<CalculateOperationOfTwoNumbers(number1,number2,OT);
}