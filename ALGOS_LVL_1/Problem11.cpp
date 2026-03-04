 #include<iostream>
 using namespace std;
 enum enPassFail{Pass,Fail};
 void  GetNumbers(int &n1, int &n2, int &n3){
     cout<<"Enter Number1: ";
     cin>>n1;
     cout<<"\nEnter Number2: ";
     cin>>n2;
     cout<<"\nEnter Number3: ";
     cin>>n3;
 }
 int SumOfNumbers(int n1,int n2,int n3){
     return  n1+n2+n3;
 }  
 float CalculateAverage(int n1,int n2, int n3){
    return (float) SumOfNumbers(n1,n2,n3)/3;
 }
 enPassFail CheckPassOrFail(float average){
    if(average>=50) return enPassFail::Pass;
    else return enPassFail::Fail;
 }
 
 void PrintResult(float average){
     cout<<"\nthe Average is "<<average;
     if(CheckPassOrFail(average)==enPassFail::Fail) cout<<"\nYou failed";
     else cout<<"\nYou passed";
 }

 int main(){
    int n1,n2,n3;
    GetNumbers(n1,n2,n3);
    PrintResult(CalculateAverage(n1,n2,n3));       
 }
