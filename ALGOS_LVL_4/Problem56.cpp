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

stDate ReadDateInfo()
{
  stDate Date;
  
  Date.Year = ReadNumber("\n\nPlease enter a Year : ");
  Date.Month = ReadNumber("\nPlease enter a Month: ");
  Date.Day = ReadNumber("\nPlease enter a Day : ");

  return Date;
}

bool IsDate1EqualDate2(stDate Date1, stDate Date2)
{
return (Date1.Year == Date2.Year) ? ((Date1.Month == Date2.Month) ? ((Date1.Day == Date2.Day) ? true : false) : false) : false;
}

bool IsDate1BeforeDate2(const stDate &Date1 ,const stDate &Date2)
{
return (Date1.Year < Date2.Year) ? true : ((Date1.Year == Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month == Date2.Month ? Date1.Day < Date2.Day : false)) : false);
}

bool IsDate1AfterDate2(const stDate &Date1 ,const stDate &Date2)
{
  return (!IsDate1BeforeDate2(Date1 ,Date2) && !IsDate1EqualDate2(Date1 ,Date2));
}

int main()
{
 stDate Date1 = ReadDateInfo();
 stDate Date2 = ReadDateInfo();
 
 if(IsDate1AfterDate2(Date1 ,Date2))
 {
    cout<<"Yes ,Date1 is after Date2!";
 }
 else
 {
    cout<<"No ,Date1 is not after Date2!";
 }
}