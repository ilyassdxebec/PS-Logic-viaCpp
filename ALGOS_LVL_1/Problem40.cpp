#include<iostream>
using namespace std;
float ReadBillValue(string message){
    float bill;
    do{
        cout<<endl<<message;
        cin>>bill;
    }while(bill<=0);
    return bill;
}
   float CalculateServiceFee(float bill){
    return bill+bill*0.1;
   }
   float CalculateSalesTax(float servicefee){
    return servicefee+servicefee*0.16;
   }
int main(){
   cout<<CalculateSalesTax(CalculateServiceFee(ReadBillValue("Enter Bill Value: ")));
}