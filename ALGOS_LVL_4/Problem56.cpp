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

int main()
{
 cout<<"Reading Date 1: "<<endl;
 stDate Date1 = ReadFullDate();

 cout<<"\nReading Date 2: "<<endl;
 stDate Date2 = ReadFullDate();

 cout<<((IsDate1AfterDate2(Date1 ,Date2)) ? "Yes ,Date1 is after Date 2" : "No ,Date1 is not after date 2");
}