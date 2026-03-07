#include<iostream>
using namespace std;

void FibonacciUsingRecursion(int Length ,int Left ,int Right)
{
 if(Length>0)
 {
     int FibonacciNum = Left+Right;

  cout<<FibonacciNum<<" ";

  FibonacciUsingRecursion(Length-1,Right,FibonacciNum);
 }
}

int main()
{
  cout<<"0 1 ";
  FibonacciUsingRecursion(13 ,0 ,1);
}