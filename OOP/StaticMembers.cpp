#include<iostream>
using namespace std;

class clsPerson
{
 
 public:
  
  int age;
  static int counter;

  clsPerson()
  {
    counter++;
  }

  void PrintPersonInfo()
  {
    cout<<"\n\nPerson Age is : "<<age<<endl;
    cout<<"Counter is : "<<counter;
  }
};

int clsPerson::counter = 0;

int main()
{
 clsPerson Person1;
 
 Person1.age = 54;
 Person1.PrintPersonInfo();
 
 clsPerson Person2;
 Person2.age = 4;
 Person1.PrintPersonInfo();

 clsPerson Person3;
 Person3.age = 5454;
 Person1.PrintPersonInfo();

 clsPerson Person4;
 Person4.age = 3333;
 Person1.PrintPersonInfo();

 clsPerson Person5;
 Person5.age = 6;
 Person1.PrintPersonInfo();

 Person1.counter = 9999;

 Person4.PrintPersonInfo();

 system("pause>0");
}