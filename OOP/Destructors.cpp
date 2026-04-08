#include<iostream>
using namespace std;

class clsPerson
{
 public:
  
  clsPerson()
  {
    cout<<"Hi ,I'm a constructor!\n";
  }

  ~clsPerson()
  {
    cout<<"Hi ,I'm a destructor!\n"; 
  }
};

void Func1()
{
 clsPerson Person1;
}

void Func2()
{
 clsPerson *Person1 = new clsPerson;

 delete Person1;
}

int main()
{ 
  cout<<"This is the main function object:\n";
  clsPerson Person1;
  
  cout<<"This is the Func1 Object:\n";
  Func1();

  cout<<"This is the Func2 Object:\n";
  Func2();

  system("pause>0");
}