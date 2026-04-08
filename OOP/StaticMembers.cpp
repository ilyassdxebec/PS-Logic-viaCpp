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
    cout<<"Person Age is : "<<age<<endl;
    cout<<counter;
  }
};

int clsPerson::counter = 0;

int main()
{
 
}