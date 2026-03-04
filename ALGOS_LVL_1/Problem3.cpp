#include<iostream>
using namespace std;
enum enNumberType {Odd =1,Even =2};

int GetNumber(){

    int num;
    cout<<"Enter a Number:";
    cin>>num;
    return num;
}
enNumberType CheckOddOrEven(int num){
     cout<<endl;
   if(num%2==0) return enNumberType::Even;
   else return enNumberType::Odd;
}
void OutputResult(enNumberType NumType){
    if(NumType==enNumberType::Even) cout<<"Your Number is Even";
    else cout<<"Your Number is Odd";
}
   

int main(){
     OutputResult(CheckOddOrEven(GetNumber()));
}