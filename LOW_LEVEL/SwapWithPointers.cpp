#include<iostream>
using namespace std;

void Swap(int *a,int *b)
{
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

int main()
{
  int a=23,b=99;

  cout<<"Value of a before swapping is : "<<a<<" and value of b is : "<<b<<endl;

  Swap(&a,&b);

  cout<<"Value of a after swapping is : "<<a<<" and value of b after swapping is : "<<b<<endl;
}