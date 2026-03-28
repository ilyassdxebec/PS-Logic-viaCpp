#include<iostream>
#include<string>
#include<ctime>
using namespace std;

enum enDatesComparison {Before = -1 , Equal = 0 , After = 1};
enum enPeriodsOverlap {NoOverlap = 0 , Overlaps = 1};

struct stDate 
{
  int Year;
  int Month;
  int Day;
};

struct stPeriod
{
  stDate DateFrom;
  stDate DateTo;
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
  
  Date.Year = ReadNumber("\n\nPlease enter a Year : ");
  Date.Month = ReadNumber("\nPlease enter a Month: ");
  Date.Day = ReadNumber("\nPlease enter a Day : ");

  return Date;
}

bool IsDate1EqualDate2(stDate Date1, stDate Date2)
{
return (Date1.Year == Date2.Year) ? ((Date1.Month == Date2.Month) ? ((Date1.Day == Date2.Day) ? true : false) : false) : false;
}

bool IsDate1BeforeDate2(const stDate &Date1 ,const stDate &Date2)
{
return (Date1.Year < Date2.Year) ? true : ((Date1.Year == Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month == Date2.Month ? Date1.Day < Date2.Day : false)) : false);
}

bool IsDate1AfterDate2(const stDate &Date1 ,const stDate &Date2)
{
  return (!IsDate1BeforeDate2(Date1 ,Date2) && !IsDate1EqualDate2(Date1 ,Date2));
}

enDatesComparison CompareDates(const stDate &Date1 ,const stDate &Date2)
{
  if(IsDate1BeforeDate2(Date1 ,Date2)) return  Before;
  if(IsDate1AfterDate2(Date1 ,Date2)) return After;

  return Equal;
}

stPeriod ReadPeriod()
{
 stPeriod Period;

 Period.DateFrom = ReadDateInfo();
 Period.DateTo = ReadDateInfo();

 return Period;
}

bool isPeriodsOverlap(const stPeriod &Period1,const stPeriod &Period2)
{
    if (CompareDates(Period2.DateTo, Period1.DateFrom) == Before ||
        CompareDates(Period2.DateFrom, Period1.DateTo) == After)
        return false;

    return true;
}

bool isLeapYear(short Year)
{
    return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
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

int DaysInYear(short year)
{
  return (isLeapYear(year)) ? 366 : 365 ;
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

bool IsDate1BeforeDate2(const stDate &Date1 ,const stDate &Date2)
{
return (Date1.Year < Date2.Year) ? true : ((Date1.Year == Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month == Date2.Month ? Date1.Day < Date2.Day : false)) : false);
}

int DaysBetweenTwoDates(stDate Date1 ,stDate Date2)
{
  int Difference = 0;

   if(Date1.Year == Date2.Year)
   {
      Difference =  (DaysFromBeginningOfYear(Date2.Year ,Date2.Month ,Date2.Day) - DaysFromBeginningOfYear(Date1.Year ,Date1.Month ,Date1.Day));  
   }
   
   else
   {
       int DaysBetween = 0;

   while(true)
   { 
     DaysBetween += DaysInYear(Date2.Year);
     Date2.Year--;
     
        if(Date1.Year == Date2.Year)
        {
        Difference =  (DaysFromBeginningOfYear(Date2.Year ,Date2.Month ,Date2.Day) - DaysFromBeginningOfYear(Date1.Year ,Date1.Month ,Date1.Day)) + DaysBetween;
        break;  
        }

   }
   }

   return IsDate1BeforeDate2(Date1 ,Date2) ? Difference : -Difference;
}

int CountOverlapDays(const stPeriod &Period1,const stPeriod &Period2)
{
 if(isPeriodsOverlap(Period1 ,Period2))
 {
   
 }


 return -1;
}

int main()
{
  stPeriod Period1 ,Period2;
  
  cout<<"\nPeriod1:";
  Period1 = ReadPeriod();

  cout<<"\nPeriod2:";
  Period2 = ReadPeriod();

 
}