#include<iostream>
#include<string>
using namespace std;

int ReadNumber()
{
  int Number;

  cout<<"Please enter a number : ";
  cin>>Number;

  return Number;
}

bool isLeapYear(short year)
{
  if(year % 400 == 0)
  {
    return true;
  }
  if(year % 4 == 0 && year % 100 != 0)
  {
    return true;
  }
  return false;
}

int main()
{
    if(isLeapYear(ReadNumber()))
    {
        cout<<"\nYes, it's a leap year!";
    }
    else 
    {
        cout<<"\nNo, it's not a leap year!";
    }
}