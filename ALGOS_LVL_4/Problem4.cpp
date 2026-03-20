#include<iostream>
#include<string>
using namespace std;

int ReadNumber(string message)
{
  int Number;

  cout<<message;
  cin>>Number;
  
  return Number;
}

bool isLeapYear(int year)
{
  return (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0));
}

int DaysInYear(short year)
{
  return (isLeapYear(year)) ? 366 : 365 ;
}

int HoursInYear(int year)
{
  return DaysInYear(year) * 24;
}

int MinutesInYear(int year)
{
  return HoursInYear(year) * 60;
}

int SecondsInYear(int year)
{
  return MinutesInYear(year) * 60;
}

int main()
{
  int year = ReadNumber("Please enter the year : ");

  cout<<"\nNumber of Days in year "<<year<<" are : "<<DaysInYear(year); 
  cout<<"\nNumber of Hours in year "<<year<<" are : "<<HoursInYear(year); 
  cout<<"\nNumber of Minutes in year "<<year<<" are : "<<MinutesInYear(year); 
  cout<<"\nNumber of Seconds in year "<<year<<" are : "<<SecondsInYear(year); 
  
}