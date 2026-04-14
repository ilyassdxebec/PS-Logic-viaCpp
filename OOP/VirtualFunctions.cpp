#include<iostream>
using namespace std;

class clsPerson
{
 public:

  virtual void Print()
  {
    cout<<"Hello ,I'm a Person!\n";
  }
};

class clsEmployee : public clsPerson
{
 
 public:

  void Print()
  {
    cout<<"Hello ,I'm an Employee!\n";
  }
};

class clsDeveloper : public clsPerson
{

 public:

  void Print()
  {
    cout<<"Hello ,I'm a Developer!\n";
  }
};

int main()
{
 
 clsEmployee Employee1;
 clsDeveloper Developer1;

 clsPerson *Person1 = &Employee1;
 clsPerson *Person2 = &Developer1;

 Person1->Print();
 Person2->Print();

 system("pause>0");
}