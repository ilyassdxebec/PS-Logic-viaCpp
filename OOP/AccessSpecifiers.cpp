#include<iostream>
using namespace std;

class clsPerson
{

 private: // Can only be accessed inside class

  double MonthlySalary = 3000;

  double MonthlyTax()
  {
   return 100;
  }
 
 protected: //can only be accessed inside class or by other classes that inherited this calss
  
  int variable1 = 100;

  int function1()
  {
    return 3244;
  }

 public: //accessible everywhere

  string FirstName;
  string LastName;
  
  double YearlySalary()
  {
    return MonthlySalary*12;
  }
  
  bool IsAbleToPayTax()
  {
    return MonthlySalary>MonthlyTax();
  }

  string FullName()
  {
     return FirstName + " " + LastName;
  }
};

int main()
{

 clsPerson Person1;
 
 Person1.FirstName = "Ilyass";
 Person1.LastName = "Goat";

 cout<<Person1.FullName()<<endl;

 cout<<Person1.IsAbleToPayTax()<<endl;

 system("pause");
}