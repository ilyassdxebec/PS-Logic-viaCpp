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

int DaysInYear(short year)
{
  return (isLeapYear(year)) ? 366 : 365 ;
}

stDate ReadDateInfo()
{
  stDate Date;
  
  Date.Year = ReadNumber("\n\nPlease enter a Year : ");
  Date.Month = ReadNumber("\nPlease enter a Month: ");
  Date.Day = ReadNumber("\nPlease enter a Day : ");

  return Date;
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


bool IsDate1BeforeDate2(const stDate &Date1 ,const stDate &Date2)
{
return (Date1.Year < Date2.Year) ? true : ((Date1.Year == Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month == Date2.Month ? Date1.Day < Date2.Day : false)) : false);
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

#include <iostream>
using namespace std;

bool isLeapYear(short Year)
{
    return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

short DayOfWeekOrder(short Day, short Month, short Year)
{
    short a, y, m;
    a = (14 - Month) / 12;
    y = Year - a;
    m = Month + (12 * a) - 2;

    return (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
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

int main()
{
 cout<<"Please enter your date of birth :"<<endl;

 stDate BirthDate = ReadDateInfo();
 stDate CurrentDate = GetCurrentDate();
 

 if(IsDate1BeforeDate2(BirthDate ,CurrentDate))
 {
    cout<<"\nYour age is : "<<DaysBetweenTwoDates(BirthDate ,CurrentDate);
 }
 else
 {
    cout<<"\nYour born in future huh :)";
 }
}