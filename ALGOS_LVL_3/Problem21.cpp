#include<iostream>
using namespace std;

void FibonacciUsingLoop(int Length)
{
   int Prev2 = 0 ,Prev1=1 ,FibonacciNum;
   cout<<"0 1 ";

   for(short i=2;i<=Length;i++)
   {
      FibonacciNum = Prev1+Prev2;
      Prev2 = Prev1;
      Prev1 = FibonacciNum;
      cout<<FibonacciNum<<" ";
   }
}

int main()
{
  FibonacciUsingLoop(13);
}