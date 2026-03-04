#include<iostream>
using namespace std;
enum enPrime{Prime,NotPrime};

int TakePositiveNumber(string message){
    int num;
    do{
        cout<<endl<<message;
        cin>>num;
    }while(num<=0);
    return num;
}
enPrime CheckNumberType(int num){
   int mid=num/2;
   for(int i=2;i<=mid;i++){
      if(num%i==0){
        return enPrime::NotPrime;
      }
   }
   return enPrime::Prime;
}       
void PrintNumberType(enPrime NumType){
     if(NumType==enPrime::NotPrime){
        cout<<"\nthis number is not a prime number";
     }else cout<<"\nthis number is a prime number";
}

int main(){
   PrintNumberType(CheckNumberType(TakePositiveNumber("please enter a positive number: ")));
}