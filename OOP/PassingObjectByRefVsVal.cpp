#include<iostream>
using namespace std;

class clsA
{
 public:

  int x;

  void func1(clsA A)
  {
   A.x = 234;
  }

  void func2(clsA &A)
  {
   A.x = 999;
  }

  void Print()
  {
    cout<<"the value of x is : "<<x<<"\n\n";
  }
};

int main()
{
 clsA A;

 A.x = 111;

 cout<<"Before invoking any functions : \n";
 A.Print();

 A.func1(A);
 cout<<"Nothing changes because the object is passed by Value\n";
 A.Print();

 A.func2(A);
 cout<<"x value has changed because the object is passed by Ref\n";
 A.Print();

 system("pause>0");
}