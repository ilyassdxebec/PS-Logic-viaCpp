#include<iostream>
using namespace std;

class clsPerson
{
 public:

  static int function1()
  {
    return 10;
  }

  int function2()
  {
    return 20;
  }
};

int main()
{
 
 clsPerson Person1;

 cout<<clsPerson::function1()<<endl;
 
 cout<<Person1.function2();

 system("pause>0");
}