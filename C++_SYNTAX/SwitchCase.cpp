#include<iostream>
using namespace std;

void TakeInput(int &a,int &b,char &Operator){

   cout<<"enter the first number:"<<endl;
   cin>>a;
   cout<<"enter the second number: "<<endl;
   cin>>b;
   cout<<"enter the oprator: "<<endl;
   cin>>Operator;
}

int Claculation(int a,int b,char Operator){

   switch (Operator)
   {
   case '+':  return a+b;
   case '-':  return  a-b;
   case '*': return  a*b;
   case '/':  return a/b;
     default:
   return 0;
   }
}
int main(){
    int a,b;
    char Operator;
    TakeInput(a,b,Operator);
   int answer = Claculation(a,b,Operator);
   cout<<"result is: "<<answer;
}