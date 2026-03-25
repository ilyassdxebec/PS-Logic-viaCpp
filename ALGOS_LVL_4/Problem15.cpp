#include<iostream>
#include<string>
using namespace std;

struct stDate 
{
  int Year;
  int Month;
  int Day;
};

int ReadNumber(string message)
{
  int Number;

  cout<<message;
  cin>>Number;
  
  return Number;
}

bool isLeapYear(short Year)
{
    return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

short NumberOfDaysInAMonth(short Month, short Year)
{
    if (Month < 1 || Month > 12)
        return 0;

    int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    return (Month == 2) ? (isLeapYear(Year) ? 29 : 28) : days[Month - 1];
}

stDate ReadDateInfo()
{
  stDate Date;
  
  Date.Year = ReadNumber("\n\nPlease enter a Year : ");
  Date.Month = ReadNumber("\nPlease enter a Month: ");
  Date.Day = ReadNumber("\nPlease enter a Day : ");

  return Date;
}

bool isLastDayInMonth(const stDate &Date)
{
 return NumberOfDaysInAMonth(Date.Month ,Date.Year) == Date.Day;
}

bool isLastMonthInYear(const stDate &Date)
{
 return Date.Month == 12;
}

int main()
{
 stDate Date1 = ReadDateInfo();
 
 cout << (isLastDayInMonth(Date1) ? "\nYes, Day is last day in month!" : "\nNo, Day is not last day in month!");
 cout << (isLastMonthInYear(Date1) ? "\nYes, Month is last month in year!" : "\nNo, Month is not last month in year!");
}