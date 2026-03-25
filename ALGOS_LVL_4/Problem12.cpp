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

stDate ReadDateInfo()
{
  stDate Date;
  
  Date.Year = ReadNumber("\nPlease enter a Year : ");
  Date.Month = ReadNumber("\nPlease enter a Month: ");
  Date.Day = ReadNumber("\nPlease enter a Day : ");

  return Date;
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

void AddDaysToDate(stDate &Date ,const int &DaysToAdd)
{
 int RemainingDays = DaysToAdd + DaysFromBeginningOfYear(Date.Year ,Date.Month ,Date.Day);
 int MonthDays;
 Date.Month = 1;

 while(true)
 {
   MonthDays = DaysInMonth(Date.Year ,Date.Month);

   if(RemainingDays > MonthDays)
   {
     RemainingDays -= MonthDays;
     Date.Month++;

     if(Date.Month > 12)
     {
       Date.Year++;
       Date.Month = 1;
     }
   }
   else
   {
    Date.Day = RemainingDays;
    break;
   }
 }
}

int main()
{
 stDate Date = ReadDateInfo();
 
 int DaysToAdd = ReadNumber("\nPlease enter how many days to add : ");

 AddDaysToDate(Date ,DaysToAdd);

 cout<<"\nDate after adding ["<<DaysToAdd<<"] days is : "<<Date.Day<<"/"<<Date.Month<<"/"<<Date.Year;
}