#include<iostream>
using namespace std;
struct stMoney
{
    float penny,nickel,dime,quarter,dollar;
};

stMoney GetMoney(){
    stMoney money1;
    cout<<"\nPlease Enter Pennies Amount: ";
    cin>>money1.penny;
    cout<<"\nPlease Enter nickles Amount: ";
    cin>>money1.nickel;
    cout<<"\nPlease Enter dimes Amount: ";
    cin>>money1.dime;
    cout<<"\nPlease Enter quarters Amount: ";
    cin>>money1.quarter;
    cout<<"\nPlease Enter dollars Amount: ";
    cin>>money1.dollar;
    return money1;
}

float CalculateTotalPennies(stMoney money1){
   return money1.penny+money1.nickel*5+money1.dime*10+money1.quarter*25+money1.dollar*100;
}
float CalculateTotalDollars(stMoney money1){
    return CalculateTotalPennies(money1)/100; 
}
void PrintChange(stMoney money1){
   cout<<"\nTotalPennies are: "<<CalculateTotalPennies(money1)<<" and TotalDollars are: "<<CalculateTotalDollars(money1);
}
int main(){
   PrintChange(GetMoney());
}