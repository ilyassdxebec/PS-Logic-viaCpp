#include<iostream>
#include<string>
#include<ctime>

using namespace std;

enum enDateComparison {Before = -1 ,Equal = 0 ,After = 1};

struct stDate
{
 int Year;
 int Month;
 int Day;
};

struct stPeriod
{
 stDate PeriodStart;
 stDate PeriodEnd;
};

short ReadDay()
{
    short Day;
    cout << "Please enter a Day? ";
    cin >> Day;
    return Day;
}
 
short ReadMonth()
{
    short Month;
    cout << "Please enter a Month? ";
    cin >> Month;
    return Month;
}
 
short ReadYear()
{
    short Year;
    cout << "Please enter a Year? ";
    cin >> Year;
    return Year;
}
stDate ReadFullDate()
{
    stDate Date;
    Date.Day   = ReadDay();
    Date.Month = ReadMonth();
    Date.Year  = ReadYear();
    return Date;
}

bool IsDate1BeforeDate2(const stDate &Date1 ,const stDate &Date2)
{
return (Date1.Year < Date2.Year) ? true : ((Date1.Year == Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month == Date2.Month ? Date1.Day < Date2.Day : false)) : false);
}

bool IsDate1EqualsDate2(const stDate &Date1 ,const stDate &Date2)
{
  return (Date1.Year == Date2.Year) && (Date1.Month == Date2.Month) && (Date1.Day == Date2.Day);
}

bool IsDate1AfterDate2(const stDate &Date1 ,const stDate &Date2)
{
  return (!IsDate1BeforeDate2(Date1 ,Date2)) && (!IsDate1EqualsDate2(Date1 ,Date2));
}

enDateComparison CompareTwoDates(stDate Date1 ,stDate Date2)
{
  if(IsDate1BeforeDate2(Date1 ,Date2)) return Before;
  if(IsDate1EqualsDate2(Date1 ,Date2)) return Equal;
  return After;
}

void ReadPeriodInfo(stPeriod &Period)
{
 Period.PeriodStart = ReadFullDate();
 cout<<endl;
 Period.PeriodEnd = ReadFullDate();
}

bool AreTwoPeriodsOverlaped(const stPeriod &Period1 ,const stPeriod &Period2)
{
  return !(CompareTwoDates(Period1.PeriodEnd ,Period2.PeriodStart) == Before || CompareTwoDates(Period2.PeriodEnd ,Period1.PeriodStart) == Before);
}

bool isLeapYear(short Year)
{
    return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

int DaysInYear(short year)
{
  return (isLeapYear(year)) ? 366 : 365 ;
}

bool isLastMonthInYear(const stDate &Date)
{
 return Date.Month == 12;
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

int DaysBetweenTwoDates(stDate Date1 ,stDate Date2)
{
    
   if(Date1.Year == Date2.Year)
   {
      return (DaysFromBeginningOfYear(Date2.Year ,Date2.Month ,Date2.Day) - DaysFromBeginningOfYear(Date1.Year ,Date1.Month ,Date1.Day));  
   }
   
   int DaysBetween = 0;

   while(true)
   { 
     DaysBetween += DaysInYear(Date2.Year);
     Date2.Year--;
     
    if(Date1.Year == Date2.Year)
   {
     return (DaysFromBeginningOfYear(Date2.Year ,Date2.Month ,Date2.Day) - DaysFromBeginningOfYear(Date1.Year ,Date1.Month ,Date1.Day)) + DaysBetween;  
   }

   }
}

int PeriodLengthInDays(const stPeriod &Period)
{

 if(IsDate1BeforeDate2(Period.PeriodStart ,Period.PeriodEnd))
 {
    return DaysBetweenTwoDates(Period.PeriodStart ,Period.PeriodEnd);
 }

 return 0;
}

int main()
{
 stPeriod Period;

 cout<<"Reading Period Info : \n\n";
 ReadPeriodInfo(Period);
 
 cout<<"\nPeriod Date in Days is : "<<PeriodLengthInDays(Period);
}