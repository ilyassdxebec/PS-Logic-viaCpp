 #include<iostream>
 using namespace std;

 int GetNumbers(int &n1, int &n2, int &n3){
     cout<<"Enter Number1: ";
     cin>>n1;
     cout<<"\nEnter Number2: ";
     cin>>n2;
     cout<<"\nEnter Number3: ";
     cin>>n3;
     return n1,n2,n3;
 }
 int MathOperation(int n1,int n2,int n3){
     int answer = n1+n2+n3;
     return answer;
 }
 void PrintResult(int answer){
     cout<<"\nthe result is "<<answer;
 }

 int main(){
    int n1,n2,n3;
    GetNumbers(n1,n2,n3);
    PrintResult(MathOperation(n1,n2,n3));    
 }
