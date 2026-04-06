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

   string GetFirstName()
   {
     return _FirstName;
   }

   string GetLastName()
   {
     return _LastName;
   }

   string GetFullName()
   {
    return GetFirstName() + " " + GetLastName();
   }
   
   __declspec(property(get = GetFirstName ,put = SetFirstName)) string FirstName;
};

int main()
{
  clsPerson Person1;
  
  Person1.SetFirstName("James");
  Person1.SetLastName("Bond");

  cout<<"First Name is : "<<Person1.GetFirstName()<<endl;
  cout<<"Last Name is : "<<Person1.GetLastName()<<endl;

  cout<<"Full Name is : "<<Person1.GetFullName()<<endl;
  
  cout<<"Person Id is : "<<Person1.ID()<<endl;
  

  Person1.FirstName = "shifou";
  cout<<"First Name is : "<<Person1.FirstName<<endl;

  system("Pause");
}