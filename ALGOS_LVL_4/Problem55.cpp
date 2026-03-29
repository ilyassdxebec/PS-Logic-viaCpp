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

string ShortNameOfDay(const stDate &Date)
{
 string NameOfDay[] = {"Sun","Mon","Tue","Wed","Thu","Fri","Sat"};

 short OrderOfDay = DayOfWeekOrder(Date);

 return NameOfDay[OrderOfDay];
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

stDate IncreaseDateByXDays(stDate Date ,const int &DaysToAdd)
{
 for(int i=0;i<DaysToAdd;i++)
 {
  Date = IncreaseDateByOneDay(Date);
 }
 return Date;
}

stDate CalculateVacationReturnDate(stDate Date, int VacationDays)
{
 int WeekEnd = 0;

 while(IsWeekEnd(Date))
 {
   Date = IncreaseDateByOneDay(Date);
 }

 for(int i=0 ;i<VacationDays + WeekEnd ;i++)
 {
   if(IsWeekEnd(Date))
     WeekEnd++;

   Date = IncreaseDateByOneDay(Date);   
 }

 while(IsWeekEnd(Date))
 {
   Date = IncreaseDateByOneDay(Date);
 }

 return Date;
}

int main()
{
 cout<<"Vacation Starts: \n\n";
 stDate Date1 = ReadFullDate();

 int VacationDays;

 cout<<"\nPlease enter Vacation Days : ";
 cin>>VacationDays;
 
 stDate Date2 = CalculateVacationReturnDate(Date1 ,VacationDays);

 cout<<"\nVacation End Date is : "<<Date2.Day<<"/"<<Date2.Month<<"/"<<Date2.Year;
}