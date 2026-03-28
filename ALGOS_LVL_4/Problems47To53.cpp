#include <iostream>
#include<ctime>

using namespace std;

struct stDate
{
    short Year;
    short Month;
    short Day;
};

bool isLeapYear(short Year)
{
    return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
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
  return DayOfWeekOrder(Date.Year ,Date.Month ,Date.Day);
}

string DayShortName(short DayOfWeekOrder)
{
    string arrDayNames[] = { "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat" };

    return arrDayNames[DayOfWeekOrder];
}

stDate GetCurrentDate()
{
 stDate CurrentDate;   

 time_t now = time(0);
 tm* ltm = localtime(&now);

 CurrentDate.Day = ltm->tm_mday;
 CurrentDate.Month = 1 + ltm->tm_mon;
 CurrentDate.Year = 1900 + ltm->tm_year;

 return CurrentDate;
}

bool isEndOfWeek(const stDate &Date)
{
  return DayOfWeekOrder(Date) == 6;
}

bool isWeekEnd(const stDate &Date)
{
   short Day = DayOfWeekOrder(Date);

   return (Day == 5 || Day == 6);
}

bool isBusinessDay(const stDate &Date)
{
  return (!(isWeekEnd(Date)));
}

int DaysUntilEndOfWeek(const stDate &Date)
{
  return 6 - DayOfWeekOrder(Date);
}

int DaysUntilEndOfMonth(const stDate &Date)
{
  int DaysInCurrentMonth = DaysInMonth(Date.Year ,Date.Month);

  return DaysInCurrentMonth - Date.Day;
}

int DaysUntilEndOfYear(const stDate &Date)
{
   return DaysInYear(Date.Year) - DaysFromBeginningOfYear(Date.Year ,Date.Month ,Date.Day);
}

int main()
{
    stDate Date = GetCurrentDate();

    cout<<"Today is : "<<DayShortName(DayOfWeekOrder(Date))<<" ,"<<Date.Day<<"/"<<Date.Month<<"/"<<Date.Year<<"\n\n";

    cout<<"Is it the end of the week ? "<<endl;
    cout<< ((isEndOfWeek(Date)) ? "Yes ,it is end of week!\n\n" :  "No ,it is not end of week!\n\n");
    
    cout<<"Is it the WeekEnd ? "<<endl;
    cout<< ((isWeekEnd(Date)) ? "Yes ,it is weekend!\n\n" :  "No ,it is not the weekend!\n\n");

    cout<<"Is it a business day ? "<<endl;
    cout<< ((isBusinessDay(Date)) ? "Yes ,it is a business day!\n\n" :  "No ,it is not a business day!\n\n");

    cout<<"Days until end of week are : "<<DaysUntilEndOfWeek(Date)<<" Day(s)"<<endl;
    cout<<"Days until end of month are : "<<DaysUntilEndOfMonth(Date)<<" Day(s)"<<endl;
    cout<<"Days until end of year are : "<<DaysUntilEndOfYear(Date)<<" Day(s)"<<endl;
}