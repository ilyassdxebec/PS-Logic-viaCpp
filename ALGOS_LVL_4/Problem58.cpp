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

enPeriodsOverlap isPeriodsOverlap(const stPeriod &Period1, const stPeriod &Period2)
{
    if (IsDate1BeforeDate2(Period2.DateTo, Period1.DateFrom) ||
        IsDate1AfterDate2(Period2.DateFrom, Period1.DateTo))
        return NoOverlap;

    return Overlaps;
}

int main()
{
  stPeriod Period1 ,Period2;
  
  cout<<"\nPeriod1:";
  Period1 = ReadPeriod();

  cout<<"\nPeriod2:";
  Period2 = ReadPeriod();

  switch (isPeriodsOverlap(Period1 ,Period2))
  {
  case Overlaps:

    cout<<"\nYes ,Periods Overlaps!";
    break;
  
  case NoOverlap:

    cout<<"\nNo ,Periods don't overlap!";
    break;

  default:
    break;
  }

}