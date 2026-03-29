#include<iostream>
#include<string>
#include<ctime>

using namespace std;

struct stDate
{
 int Year;
 int Month;
 int Day;
};

bool isLeapYear(short Year)
{
    return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

int DaysInYear(short Year)
{
  if(isLeapYear(Year)) return 366;
  return 365;
}

short NumberOfDaysInAMonth(short Month, short Year)
{
    if (Month < 1 || Month > 12)
        return 0;
 
    int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
 
    return (Month == 2) ? (isLeapYear(Year) ? 29 : 28) : days[Month - 1];
}

int DaysFromBeginningOfYear(int Year ,int Month ,int Day)
{
 int TotalDays = 0;

 for(int i=1 ;i<=Month - 1 ;i++)
 {
    TotalDays += NumberOfDaysInAMonth(i ,Year);
 }
 TotalDays += Day;

 return TotalDays;
}

short DayOfWeekOrder(short Day, short Month, short Year)
{
    short a, y, m;
    a = (14 - Month) / 12;
    y = Year - a;
    m = Month + (12 * a) - 2;

    return (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
}

short DayOfWeekOrder(const stDate &Date)
{
    short a, y, m;
    a = (14 - Date.Month) / 12;
    y = Date.Year - a;
    m = Date.Month + (12 * a) - 2;

    return (Date.Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
}

bool IsEndOfWeek(const stDate &Date)
{
  return DayOfWeekOrder(Date) == 6;
}

bool IsWeekEnd(const stDate &Date)
{
  return (DayOfWeekOrder(Date) == 6 || DayOfWeekOrder(Date) == 5);
}

bool IsBusinessDay(const stDate &Date)
{
 return (!IsWeekEnd(Date));
}

int DaysUntilEndOfWeek(const stDate &Date)
{
  return 6 - DayOfWeekOrder(Date);
}

int DaysUntilEndOfMonth(const stDate &Date)
{
 return NumberOfDaysInAMonth(Date.Month ,Date.Year) - Date.Day;
}

int DaysUntilEndOfYear(const stDate &Date)
{
  return (DaysInYear(Date.Year) - DaysFromBeginningOfYear(Date.Year ,Date.Month ,Date.Day));
}

stDate GetCurrentDate()
{
 stDate stCurrentDate;

 time_t t = time(0); // get time now
 tm* now = localtime(&t);

 stCurrentDate.Year = now->tm_year + 1900;
 stCurrentDate.Month = now->tm_mon + 1;
 stCurrentDate.Day = now->tm_mday;

 return stCurrentDate;
}

string ShortNameOfDay(const stDate &Date)
{
 string NameOfDay[] = {"Sun","Mon","Tue","Wed","Thu","Fri","Sat"};

 short OrderOfDay = DayOfWeekOrder(Date);

 return NameOfDay[OrderOfDay];
}

int main()
{
 stDate stCurrentDate = GetCurrentDate();

 cout<<"Today is : "<<ShortNameOfDay(stCurrentDate)<<" , "<<stCurrentDate.Day<<"/"<<stCurrentDate.Month<<"/"<<stCurrentDate.Year<<"\n\n";

 cout<<"Is it end of week? "<<endl;
 cout<<((IsEndOfWeek(stCurrentDate)) ? "Yes ,Today is end of week!" : "No ,Today is not end of week!")<<"\n\n";

 cout<<"Is it weekend? "<<endl;
 cout<<((IsWeekEnd(stCurrentDate)) ? "Yes ,Today is weekend!" : "No ,Today is not weekend!")<<"\n\n";

 cout<<"Is it Business Day? "<<endl;
 cout<<((IsBusinessDay(stCurrentDate)) ? "Yes ,Today is a business day!" : "No ,Today is not a business day!")<<"\n\n";

 cout<<"Days until end of week : "<<DaysUntilEndOfWeek(stCurrentDate)<<endl;
 cout<<"Days until end of month : "<<DaysUntilEndOfMonth(stCurrentDate)<<endl;
 cout<<"Days until end of year : "<<DaysUntilEndOfYear(stCurrentDate);
}