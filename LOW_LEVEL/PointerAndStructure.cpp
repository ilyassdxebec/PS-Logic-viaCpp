#include<iostream>
using namespace std;

struct stStudent
{
  string Name;
  int age;
  float salary;
};

int main()
{
   stStudent student,*ptr;
    
   student.Name = "J Cole";
   student.age = 41;
   student.salary = 0.33;

   ptr = &student;

   cout<<"Student Name : "<<student.Name<<endl; 
   cout<<"Student Age : "<<student.age<<endl;
   cout<<"Student Salary : "<<student.salary<<endl;

   cout<<"\n_____Using Pointer_____"<<endl;

   cout<<ptr->Name<<endl;
   cout<<ptr->age<<endl;
   cout<<ptr->salary<<endl;

}