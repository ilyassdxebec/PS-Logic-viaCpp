#include<iostream>
using namespace std;

class clsPerson
{
 private:
   
   int _ID = 55;
   string _FirstName;
   string _LastName;

 public:
   
   int ID()
   {
     return _ID;
   }

   void SetFirstName(string FirstName)
   {
    _FirstName = FirstName;
   }

   void SetLastName(string LastName)
   {
    _LastName = LastName;
   }

   string FirstName()
   {
     return _FirstName;
   }

   string LastName()
   {
     return _LastName;
   }

   string FullName()
   {
    return FirstName() + " " + LastName();
   }

};

int main()
{
  clsPerson Person1;
  
  Person1.SetFirstName("James");
  Person1.SetLastName("Bond");

  cout<<"First Name is : "<<Person1.FirstName()<<endl;
  cout<<"Last Name is : "<<Person1.LastName()<<endl;

  cout<<"Full Name is : "<<Person1.FullName()<<endl;
  
  cout<<"Person Id is : "<<Person1.ID()<<endl;

  system("Pause");
}