#include<iostream>
using namespace std;
void GetNumbers(int &n1,int &n2){
    cout<<"Enter Number1: ";
     cin>>n1;
     cout<<"\nEnter Number2: ";
     cin>>n2;
}
void SwapNumbers(int &n1,int &n2){
     int temp;
     temp = n1;
     n1 = n2;
     n2 = temp;
}
 void PrintNumbers(int n1,int n2){
    cout<<endl<<"First Number is: "<<n1<<" and Second Number is: "<<n2;
 }

int main(){
    int n1,n2;
    GetNumbers(n1,n2);
    PrintNumbers(n1,n2);
    SwapNumbers(n1,n2);
    PrintNumbers(n1,n2);

}