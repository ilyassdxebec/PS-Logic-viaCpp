#include<iostream>
using namespace std;

int main()
{
  int *ptr;
  float *fptr;

  ptr = new int;
  fptr = new float;

  *ptr = 32;
  *fptr = 23.23;

  cout<<*ptr<<endl;
  cout<<*fptr<<endl;

  delete ptr;
  delete fptr;
}