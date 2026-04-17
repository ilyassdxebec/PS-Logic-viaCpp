#include<iostream>
using namespace std;

class clsA
{
 public:
  
  clsA(int value)
  {
   x = value;
  }
  
  clsA()
  {

  }

  int x;

  void Print()
  {
    cout<<"The value of x is : "<<x<<endl;
  }
};

int main()
{
 
 clsA *arr1 = new clsA[5];

 for(short i=0 ;i<5 ;i++)
 {
  arr1[i] = clsA(i);
 }

 for(short i=0 ;i<5 ;i++)
 {
  arr1[i].Print();
 }
 
 system("pause>0");
}