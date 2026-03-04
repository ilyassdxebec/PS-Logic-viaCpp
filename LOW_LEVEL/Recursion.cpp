#include<iostream>
using namespace std;

int PowUsingRecursion(int base, int pow)
{
  return (pow==0) ?   1 : base*(PowUsingRecursion(base,pow-1));

  //using if statement

  /*if(pow==0) 
  return 1;
  return base*(PowUsingRecursion(base,pow-1));
  */
}

int main()
{
   cout<<PowUsingRecursion(2,4);
}