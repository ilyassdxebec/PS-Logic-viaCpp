#include<iostream>
using namespace std;
int GetNumber(){
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    return number;
}
void PowOf2_3_4(int number){
   int a,b,c;
   a=number*number;
   b=number*number*number;
   c=number*number*number*number;
   cout<<endl<<a<<" "<<b<<" "<<c<<" ";
}
int main(){
  PowOf2_3_4(GetNumber());
}