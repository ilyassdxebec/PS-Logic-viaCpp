#include<iostream>
#include<vector>
using namespace std;

struct stEmployee{
  string FirstName;
  string LastName;
  float Salary;
};

int main()
{
  vector <stEmployee> vEmployee;
  stEmployee Employee;

  Employee.FirstName = "Ilyass";
  Employee.LastName = "Zn";
  Employee.Salary = 2343252435.234;
  vEmployee.push_back(Employee);
  
    Employee.FirstName = "Broke";
  Employee.LastName = "Loser";
  Employee.Salary = 23;
  vEmployee.push_back(Employee);

    Employee.FirstName = "Nobody";
  Employee.LastName = "123";
  Employee.Salary = 0.234;
  vEmployee.push_back(Employee);

  for(stEmployee &employee : vEmployee)
  {
    cout<<"First Name : "<<employee.FirstName<<endl;
    cout<<"Last Name : "<<employee.LastName<<endl;
    cout<<"Salary : "<<employee.Salary<<endl;
    cout<<endl;
  }

}