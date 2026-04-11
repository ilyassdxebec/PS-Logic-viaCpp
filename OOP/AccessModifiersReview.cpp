#include<iostream>
using namespace std;

class clsA
{
 private:
  
  int _var1;

  int Func1()
  {
    return 2134;
  }

 protected:

  void Func2()
  {
    cout<<"this is protected!";
  }

 public:

  void Func3()
  {
    cout<<"Hello guys!\n";
  }
};

class clsB : public clsA
{ 
 public:

  void Func4()
  {
    clsA::Func2();
  }
  
};

int main()
{
  clsB Object;

  Object.Func3();
  Object.Func4();

  system("pause>0");
}