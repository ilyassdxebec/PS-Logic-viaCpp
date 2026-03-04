#include<iostream>
#include<vector>
using namespace std;

struct stEmployee{
  string FirstName;
  string LastName;
  float Salary;
};

void ReadEmployees(vector <stEmployee> &vEmployees)
{
    char Choice;
    stEmployee TempEmployee;

  do{

   cout<<"Enter Employee's First Name: ";
   cin>>TempEmployee.FirstName;
   cout<<"\nEnter Employee's Last Name: ";
   cin>>TempEmployee.LastName;
   cout<<"\nEnter Employee's Salary: ";
   cin>>TempEmployee.Salary;

   vEmployees.push_back(TempEmployee);

   cout<<"Do you want to add another employee: (y/n) ? ";
   cin>>Choice;
   cout<<endl;

  }while(Choice=='Y'||Choice=='y');
}

void PrintEmployeeInfo(vector <stEmployee> &vEmployees)
{

    cout<<"\n___________Employees Infos____________\n\n";

  for(stEmployee &emp : vEmployees)
  {
    cout<<"First Name : "<<emp.FirstName<<endl;
    cout<<"Last Name : "<<emp.LastName<<endl;
    cout<<"Salary : "<<emp.Salary<<endl;
    cout<<endl;
  }
}

int main()
{
  vector <stEmployee> vEmployees;
  stEmployee employee;

  ReadEmployees(vEmployees);
  PrintEmployeeInfo(vEmployees);
}