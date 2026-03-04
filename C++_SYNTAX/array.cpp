#include<iostream>
using namespace std;
void TakeArrayInput(int x[3]){
   cout<<"x[1] = ";
   cin>>x[0];
   cout<<endl;
   cout<<"x[2] = ";
   cin>>x[1];
   cout<<endl;
   cout<<"x[3] = ";
   cin>>x[2];
   cout<<endl;
}
void OutputArrayValue(int x[3]){
   cout<<"**************\n";
   cout<<"x[1] = "<<x[0]<<" x[2] = "<<x[1]<<" x[3] = "<<x[2];
}
int main(){
    int x[3];
    TakeArrayInput(x);
    OutputArrayValue(x);
}