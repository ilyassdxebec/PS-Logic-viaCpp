 #include<iostream>
 using namespace std;
 void  GetNumbers(int &n1, int &n2){
     cout<<"Enter Number1: ";
     cin>>n1;
     cout<<"\nEnter Number2: ";
     cin>>n2;
 }
 int CompareNumbers(int n1,int n2){
    return n1-n2;
 }
  void PrintResutl(int n1,int n2){
     if(CompareNumbers(n1,n2)>=0) cout<<endl<<n1 <<" is greater than "<<n2;
     else cout<<endl<<n2 <<"is greater than "<<n1;
  }

 int main(){
    int n1,n2;
    GetNumbers(n1,n2);
    PrintResutl(n1,n2);
 }