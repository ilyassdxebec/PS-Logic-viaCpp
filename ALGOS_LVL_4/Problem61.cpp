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

bool isLeapYear(short Year)
{
    return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
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

int DaysInPeriod(const stPeriod &Period)
{
 return DaysBetweenTwoDates(Period.PeriodStart ,Period.PeriodEnd);
}

bool IsDateInPeriod(const stPeriod &Period ,const stDate &Date)
{
  return !(CompareTwoDates(Date ,Period.PeriodStart) == Before || CompareTwoDates(Date ,Period.PeriodEnd) == After);
}
 
short NumberOfDaysInAMonth(short Month, short Year)
{
    if (Month < 1 || Month > 12)
        return 0;
 
    int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
 
    return (Month == 2) ? (isLeapYear(Year) ? 29 : 28) : days[Month - 1];
}
 
bool IsLastDayInMonth(stDate Date)
{
    return (Date.Day == NumberOfDaysInAMonth(Date.Month, Date.Year));
}
 
bool IsLastMonthInYear(short Month)
{
    return (Month == 12);
}

stDate IncreaseDateByOneDay(stDate Date)
{
    if (IsLastDayInMonth(Date))
    {
        if (IsLastMonthInYear(Date.Month))
        {
            Date.Month = 1;
            Date.Day = 1;
            Date.Year++;
        }
        else
        {
            Date.Day = 1;
            Date.Month++;
        }
    }
    else
    {
        Date.Day++;
    }
 
    return Date;
}

int PeriodLengthInDays(const stPeriod &Period)
{

 if(IsDate1BeforeDate2(Period.PeriodStart ,Period.PeriodEnd))
 {
    return DaysBetweenTwoDates(Period.PeriodStart ,Period.PeriodEnd);
 }

 return 0;
}

int CountTwoPeriodsOverlapedDays(stPeriod Period1 ,stPeriod Period2)
{
  int OverlapedDays = 0;

  int Period1Length = PeriodLengthInDays(Period1);
  int Period2Length = PeriodLengthInDays(Period2);

  if(!AreTwoPeriodsOverlaped(Period1 ,Period2))
     return 0;
   
  if(Period1Length < Period2Length)
  {
    while(DaysInPeriod(Period1) > 0)
    {
      if(IsDateInPeriod(Period2 ,Period1.PeriodStart))
        OverlapedDays++;

      Period1.PeriodStart = IncreaseDateByOneDay(Period1.PeriodStart);
    }
    return OverlapedDays;
  }   

  else
  {
    while(DaysInPeriod(Period2) > 0)
    {
      if(IsDateInPeriod(Period1 ,Period2.PeriodStart))
        OverlapedDays++;

      Period2.PeriodStart = IncreaseDateByOneDay(Period2.PeriodStart);
    }
    return OverlapedDays;
  }
}

int main()
{
 stPeriod Period1 ,Period2;

 cout<<"Reading Period1 Info : \n\n";
 ReadPeriodInfo(Period1);
 
 cout<<"Reading Period2 Info : \n\n";
 ReadPeriodInfo(Period2);

 cout<<"\nOverlaped Days Count is : "<<CountTwoPeriodsOverlapedDays(Period1 ,Period2);
}