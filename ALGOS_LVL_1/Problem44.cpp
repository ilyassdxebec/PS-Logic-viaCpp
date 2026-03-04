#include<iostream>
using namespace std;
  enum enDaysOfWeek{Sunday=1,Monday=2,Tuesday=3,Wednesday=4,Thursday=5,Friday=6,Saturday=7};
enDaysOfWeek ReadDayNumber(string message){
    int number;
    do{
        cout << endl << message;
        cin >> number;
        if(number <= 0 || number>7){
            cout<<"\nWrong number!";
        }
    } while(number <= 0 || number>7);
    return (enDaysOfWeek)number;
}
void PrintDayName(enDaysOfWeek number){
  switch (number)
  {
   case Sunday: cout<< "\nthe day is Sunday!";
   break;
   case Monday: cout<<"\nthe day is Monday!";
   break;
   case Tuesday: cout<< "\nthe day is Tuesday!";
   break;
   case Thursday: cout<< "\nthe day is Thursday!";
   break;
   case Wednesday:cout<< "\nthe day is Wednesday!";
   break;
   case Saturday: cout<< "\nthe day is Saturday!";
   break;
   case Friday: cout<< "\nthe day is Friday!";
   break;
}
}
int main(){
  PrintDayName(ReadDayNumber("Please enter a number between 1 and 7: "));
}