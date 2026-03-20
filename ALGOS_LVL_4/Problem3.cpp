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
  return (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0));
}

int main()
{
    cout << (isLeapYear(ReadNumber()) ? "Yes, it's a leap year!" : "No, it's not a leap year!");
}