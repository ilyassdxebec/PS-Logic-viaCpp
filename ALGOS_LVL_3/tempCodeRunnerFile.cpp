#include<iostream>
using namespace std;

void FibonacciUsingRecursion(int Length ,int Left ,int Right)
{
    cout<<"0 1 ";
 if(Length>0)
 {
     int FibonacciNum = Left+Right;

  cout<<FibonacciNum<<" ";
  
  Left = Right;
  Right = FibonacciNum;

  FibonacciUsingRecursion(Length-1,Left,Right);
 }
}

int main()
{
  FibonacciUsingRecursion(13 ,0 ,1);
}