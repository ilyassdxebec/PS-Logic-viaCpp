#include<iostream>
using namespace std;
int EnterPositiveNumber(string message){
    int N;
    do{
         cout<<message<<endl;
         cin>>N;
    }while(N<0);

    return N;
}
 int FactorialofN(int N){
    int factorial=1;
     for(int i=N;i>=1;i--){
        factorial*=i;
     }
     return factorial;
 }

 int main(){
 
       cout<<FactorialofN(EnterPositiveNumber("Please enter a positive Number: "));
 }