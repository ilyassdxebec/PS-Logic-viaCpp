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

int DayNameInWeek(int Year,int Month ,int Day)
{
  int a = (14 - Month) / 12;
  int y = Year - a;
  int m = Month + 12 * a - 2;

  return (Day + y + (y/4) - (y/100) + (y/400) + (31 * m) / 12) % 7;
}

bool isLeapYear(int year)
{
  return (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0));
}

short DaysInMonth(int year, int month)
{
  if(month<1 || month>12) return 0;

  if(month == 2)
  {
    return isLeapYear(year) ? 29 : 28 ;
  }

  short arr31Days[7] = {1,3,5,7,8,10,12};

  for(short i=0;i<7;i++) 
  {
    if(arr31Days[i] == month)
    {
        return 31;
    }
  }
  return 30;
} 

int DaysInYear(short year)
{
  return (isLeapYear(year)) ? 366 : 365 ;
}

int DaysFromBeginningOfYear(int Year ,int Month ,int Day)
{
 int TotalDays = 0;

 for(int i=1 ;i<=Month - 1 ;i++)
 {
    TotalDays += DaysInMonth(Year ,i);
 }
 TotalDays += Day;

 return TotalDays;
}

int main()
{
 int Year = ReadNumber("Please enter Year to check : ");
 int Month = ReadNumber("\nPlease enter Month to check : ");
 int Day = ReadNumber("\nPlease enter Day to check : ");
 
 cout<<"\nDays From Start of Year to This date are : "<<DaysFromBeginningOfYear(Year ,Month ,Day);
}