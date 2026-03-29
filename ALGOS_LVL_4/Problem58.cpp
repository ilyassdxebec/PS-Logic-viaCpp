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

int main()
{
 stPeriod Period1 ,Period2;
 
 cout<<"Reading First Period : \n\n";
 ReadPeriodInfo(Period1);
 
 cout<<"Reading Second Period : \n\n";
 ReadPeriodInfo(Period2);

 cout<<(AreTwoPeriodsOverlaped(Period1 ,Period2) ? "\nYes ,the periods overlap!" : "\nNo ,the periods don't overlap!");
}