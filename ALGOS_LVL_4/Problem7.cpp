#include<iostream>
#include<string>
using namespace std;

enum enDaysOfWeek {Sunday = 0 ,Monday = 1 ,Tuesday = 2 ,Wednesday = 3 ,Thursday = 4 ,Friday = 5 ,Saturday = 6};

int ReadNumber(string message)
{
  int Number;

  cout<<message;
  cin>>Number;
  
  return Number;
}

int DayNameInWeek(int Year,int Month ,int Day)
{
  int a = (14 - Month) / 12;
  int y = Year - a;
  int m = Month + 12 * a - 2;

  return (Day + y + (y/4) - (y/100) + (y/400) + (31 * m) / 12) % 7;
}

string PrintDay(int DayNumber)
{
 string arrDayNames[] = {"Sunday" ,"Monday" ,"Tuesday" ,"Wednesday" ,"Thursday" ,"Friday" ,"Saturday"};
 
 return arrDayNames[DayNumber];
}

int main()
{
 int Year = ReadNumber("Please enter Year to check : ");
 int Month = ReadNumber("\nPlease enter Month to check : ");
 int Day = ReadNumber("\nPlease enter Day to check : ");

 cout<<"\nDate : " <<Day<<"/"<<Month<<"/"<<Year<<endl;

 cout<<"Date Order : "<<DayNameInWeek(Year ,Month ,Day)<<endl;

 cout<<PrintDay(DayNameInWeek(Year ,Month ,Day));
}