#include<iostream>
using namespace std;

class clsEmployee
{
 public:

  string Name;
  int age;
  float Salary;

  clsEmployee(string Name ,int age, float Salary)
  {
   this->Name = Name;
   this->age = age;
   this->Salary = Salary;
  }

  void Print()
  {
    cout<<"Employee Name is : "<<Name<<" and his age is : "<<age<<" and his salary is : "<<Salary<<" a month";
  }

  static void Func1(clsEmployee Employee)
  {
    Employee.Print();
  }
  
  void Func2()
  {
    Func1(*this);
  }
};

int main()
{
 clsEmployee Employee("Ilyass" ,20 ,23523.35);
 
 Employee.Func2();
 
 system("pause>0");
}