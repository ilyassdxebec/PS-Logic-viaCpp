#include<iostream>
using namespace std;
int TakePositiveNumber(string message){
    int num;
    do{
        cout<<endl<<message;
        cin>>num;
    }while(num<=0);
    return num;
}
 int CalculateRemainder(int TotalBill,int CashPaid){
    return CashPaid-TotalBill;
 }
int main(){
  int TotalBill = TakePositiveNumber("Please enter TotalBill: ");
  int CashPaid = TakePositiveNumber("Please enter CashPaid: ");
  int remainder = CalculateRemainder(TotalBill,CashPaid);
  
  cout<<endl<<"**********************";

  cout<<endl<<" TotalBill is "<<TotalBill;
  cout<<endl<<" CashPaid is "<<CashPaid;
  cout<<endl<<" Remainder is "<<remainder;
}