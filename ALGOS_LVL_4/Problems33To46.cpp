#include<iostream>
#include<string>
using namespace std;


struct stDate
{
    short Year;
    short Month;
    short Day;
};
 
short ReadDay()
{
    short Day;
    cout << "\nPlease enter a Day? ";
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

void DecreaseDateByOneDay(stDate &Date)
{
  if(Date.Day == 1)
  {
    if(Date.Month == 1)
    {
        Date.Year--;
        Date.Month = 12;
        Date.Day = NumberOfDaysInAMonth(Date.Month ,Date.Year);
    }
    else
    {
        Date.Month--;
        Date.Day = NumberOfDaysInAMonth(Date.Month ,Date.Year);
    }  
  }

  else
  {
    Date.Day --;
  }
}

void DecreaseDateByXDays(stDate &Date ,const int &DaysToDecrease)
{
  for(int i=0;i<DaysToDecrease;i++)
  {
    DecreaseDateByOneDay(Date);
  }
}

void DecreaseDateByOneWeek(stDate &Date)
{
  DecreaseDateByXDays(Date ,7);
}

void DecreaseDateByXWeeks(stDate &Date ,const int &WeeksToDecrease)
{
  for(int i=0;i<WeeksToDecrease;i++)
  {
   DecreaseDateByOneWeek(Date);
  }
}

void DecreaseDateByOneMonth(stDate &Date)
{
  if(Date.Month == 1)
  {
    Date.Month = 12;
    Date.Year--;
  }
  else
  {
    Date.Month--;
  }

  int MaxDays = NumberOfDaysInAMonth(Date.Month ,Date.Year);

  if(Date.Day > MaxDays)
  Date.Day = MaxDays;
}

void DecreaseDateByXMonths(stDate &Date ,const int &MonthsToDecrease)
{
  for(int i=0;i<MonthsToDecrease;i++)
  {
   DecreaseDateByOneMonth(Date);
  }
}

void DecreaseDateByOneYear(stDate &Date)
{
  Date.Year--;
}

void DecreaseDateByXYears(stDate &Date ,const int &YearsToDecrease)
{
  for(int i=0;i<YearsToDecrease;i++)
  {
   DecreaseDateByOneYear(Date);
  }
}

void DecreaseDateByXYearsFaster(stDate &Date ,const int &YearsToDecrease)
{
  Date.Year -= YearsToDecrease;
}

void DecreaseDateByOneDecade(stDate &Date)
{
  Date.Year -= 10;
}

void DecreaseDateByXDecades(stDate &Date ,const int &DecadesToDecrease)
{
  for(int i=0;i<DecadesToDecrease;i++)
  {
    DecreaseDateByOneDecade(Date);
  }
}

void DecreaseDateByXDecadesFaster(stDate &Date ,const int &DecadesToDecrease)
{
  Date.Year -= DecadesToDecrease * 10;
}

void DecreaseDateByOneCentury(stDate &Date)
{
  Date.Year -= 100;
}

void DecreaseDateByOneMillennium(stDate &Date)
{
  Date.Year -= 1000;
}

int main()
{
 stDate Date = ReadFullDate();
 
 cout<<"\n\nDate After : \n\n";
 
 DecreaseDateByOneDay(Date);
 cout<<"\n01-Subtracting one day is : "<<Date.Day<<"/"<<Date.Month<<"/"<<Date.Year<<endl;

 DecreaseDateByXDays(Date ,10);
 cout<<"\n02-Subtracting 10 days is : "<<Date.Day<<"/"<<Date.Month<<"/"<<Date.Year<<endl;

 DecreaseDateByOneWeek(Date);
 cout<<"\n03-Subtracting one week is : "<<Date.Day<<"/"<<Date.Month<<"/"<<Date.Year<<endl;

 DecreaseDateByXWeeks(Date ,10);
 cout<<"\n04-Subtracting 10 weeks is : "<<Date.Day<<"/"<<Date.Month<<"/"<<Date.Year<<endl;

 DecreaseDateByOneMonth(Date);
 cout<<"\n05-Subtracting one month is : "<<Date.Day<<"/"<<Date.Month<<"/"<<Date.Year<<endl;

 DecreaseDateByXMonths(Date ,5);
 cout<<"\n06-Subtracting 5 months is : "<<Date.Day<<"/"<<Date.Month<<"/"<<Date.Year<<endl;

 DecreaseDateByOneYear(Date);
 cout<<"\n07-Subtracting one year is : "<<Date.Day<<"/"<<Date.Month<<"/"<<Date.Year<<endl;

 DecreaseDateByXYears(Date ,10);
 cout<<"\n08-Subtracting 10 years is : "<<Date.Day<<"/"<<Date.Month<<"/"<<Date.Year<<endl;

 DecreaseDateByXYearsFaster(Date ,10);
 cout<<"\n09-Subtracting 10 years is Faster: "<<Date.Day<<"/"<<Date.Month<<"/"<<Date.Year<<endl;

 DecreaseDateByOneDecade(Date);
 cout<<"\n10-Subtracting one Decade is : "<<Date.Day<<"/"<<Date.Month<<"/"<<Date.Year<<endl;

 DecreaseDateByXDecades(Date ,10);
 cout<<"\n11-Subtracting Date by 10 decades is : "<<Date.Day<<"/"<<Date.Month<<"/"<<Date.Year<<endl;
  
 DecreaseDateByXDecadesFaster(Date ,10);
 cout<<"\n12-Subtracting 10 Decade : "<<Date.Day<<"/"<<Date.Month<<"/"<<Date.Year<<endl;
  
 DecreaseDateByOneCentury(Date);
 cout<<"\n13-Subtracting Date by one century is : "<<Date.Day<<"/"<<Date.Month<<"/"<<Date.Year<<endl;

 DecreaseDateByOneMillennium(Date);
 cout<<"\n14-Subtracting Date by one Millenium is : "<<Date.Day<<"/"<<Date.Month<<"/"<<Date.Year<<endl;

}