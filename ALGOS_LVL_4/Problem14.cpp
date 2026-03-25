#include<iostream>
#include<string>
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

int main()
{
 stDate Date1 = ReadDateInfo();
 stDate Date2 = ReadDateInfo();
 
 if(IsDate1EqualDate2(Date1 ,Date2))
 {
    cout<<"\nDate 1 Equals Date 2";
 }
 else
 {
    cout<<"\nDate 1 doesn't Equal Date 2";
 }
}