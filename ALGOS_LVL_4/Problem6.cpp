#include<iostream>
#include<string>
using namespace std;

int ReadNumber(string message)
{
  int Number;

  cout<<message;
  cin>>Number;
  
  return Number;
}

bool isLeapYear(int year)
{
  return (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0));
}

short DaysInMonth(int year, int month)
{
    if (month < 1 || month > 12) return 0;

    short days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    return (month == 2) ? (isLeapYear(year) ? 29 : 28) : days[month-1]; 
}

int HoursInMonth(int year ,int month)
{
 return DaysInMonth(year,month) * 24;
}

int MinutesInMonth(int year ,int month)
{
 return HoursInMonth(year,month) * 60;
}

int SecondsInMonth(int year ,int month)
{
 return MinutesInMonth(year,month) * 60;
}

int main()
{
 int year = ReadNumber("Please enter year to check : ");
 int month = ReadNumber("\nPlease enter month to check : ");

 cout<<"\nDays in month ["<<month<<"] are "<<DaysInMonth(year,month);
 cout<<"\nHours in month ["<<month<<"] are "<<HoursInMonth(year,month);
 cout<<"\nMinutes in month ["<<month<<"] are "<<MinutesInMonth(year,month);
 cout<<"\nSeconds in month ["<<month<<"] are "<<SecondsInMonth(year,month);
}