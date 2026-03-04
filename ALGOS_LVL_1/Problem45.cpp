#include<iostream>
using namespace std;
  enum enMonths{January=1, February=2, March=3, April=4, May=5, June=6, July=7, August=8, September=9, October=10, November=11, December=12};
enMonths ReadMonthNumber(string message,int from,int to){
    int number;
    do{
        cout << endl << message;
        cin >> number;
        if(number <= from || number>to){
            cout<<"\nWrong number!";
        }
    } while(number <= from || number>to);
    return (enMonths)number;
}
void PrintMonthName(enMonths number){
  switch (number)
  {
  case January:
    cout<<"the month is January";
    break;
case February:
    cout<<"the month is February";
    break;
case March:
    cout<<"the month is March";
    break;
case April:
    cout<<"the month is April";
    break;
case May:
    cout<<"the month is May";
    break;
case June:
    cout<<"the month is June";
    break;
case July:
    cout<<"the month is July";
    break;
case August:
    cout<<"the month is August";
    break;
case September:
    cout<<"the month is September";
    break;
case October:
    cout<<"the month is October";
    break;
case November:
    cout<<"the month is November";
    break;
case December:
    cout<<"the month is December";
    break;
  
  }
}
int main(){
PrintMonthName(ReadMonthNumber("plese enter month number:",0,12));
}