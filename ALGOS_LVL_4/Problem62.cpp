#include <iostream>
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

int DaysInYear(short year)
{
  return (isLeapYear(year)) ? 366 : 365 ;
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

bool IsDateValid(const stDate &Date)
{
  return ( (Date.Year > 0) && (Date.Month>0 && Date.Month<=12) && (Date.Day <= NumberOfDaysInAMonth(Date.Month ,Date.Year) && Date.Day>0));
}

int main()
{
  stDate Date = ReadFullDate();

  cout<< ((IsDateValid(Date)) ? "\nYes ,Date is valid!" : "\nNo ,Date is not valid!");
}