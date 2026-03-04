#include<iostream>
using namespace std;

float ReadLoanAmount(string message){
    float LoanAmount;
    do{
        cout << endl << message;
        cin >> LoanAmount;
    } while(LoanAmount <= 0);
    return LoanAmount;
}
float ReadMonthlyPayment(string message){
    float MonthlyPayment;
    do{
        cout << endl << message;
        cin >> MonthlyPayment;
    } while(MonthlyPayment <= 0);
    return MonthlyPayment;
}
int CalculateNumberOfMonths(float LoanAmount,float MonthlyPayment){
    return LoanAmount/MonthlyPayment;
}
int main(){
 float LoanAmount = ReadLoanAmount("Please enter loan amount: ");
 float MonthlyPayment = ReadMonthlyPayment("Please enter your monthly payment: ");
 cout<<"You need to be paying for "<<CalculateNumberOfMonths(LoanAmount,MonthlyPayment)<<" Months";
}