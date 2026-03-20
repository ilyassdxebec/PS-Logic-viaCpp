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

int main()
{

}