#include<iostream>
using namespace std;

class clsPerson
{

 private:

  int _ID;
  string _FirstName;
  string _LastName;
  string _Email;
  string _PhoneNumber;

 public:
    
    clsPerson()
    {

    }

    clsPerson(const int &ID ,const string &FirstName ,const string &LastName ,const string &Email ,const string &PhoneNumber)
    {
      _ID = ID;
      _FirstName = FirstName;
      _LastName = LastName;
      _Email = Email;
      _PhoneNumber = PhoneNumber;
    }

    int ID()
    {
        return _ID;
    }

    string FirstName()
    {
        return _FirstName;
    }

    string LastName()
    {
        return _LastName;
    }

    string Email()
    {
        return _Email;
    }

    string PhoneNumber()
    {
        return _PhoneNumber;
    }

    void SetFirstName(const string &FirstName)
    {
      _FirstName = FirstName;
    }

     void SetLastName(const string &LastName)
    {
      _LastName = LastName;
    }
    
    void SetEmail(const string &Email)
    {
      _Email = Email;
    }
    
    void SetPhoneNumber(const string &PhoneNumber)
    {
      _PhoneNumber = PhoneNumber;
    }    

    string FullName()
    {
        return _FirstName + " " + _LastName;
    }

    void Print()
    {
        cout<<"++++++++Info++++++++\n\n";

        cout<<"____________________\n";
        cout<<"ID : "<<_ID<<endl;
        cout<<"First Name : "<<_FirstName<<endl;
        cout<<"Last Name : "<<_LastName<<endl;
        cout<<"Full Name : "<<FullName()<<endl;
        cout<<"Email : "<<_Email<<endl;
        cout<<"Phone Number : "<<_PhoneNumber<<endl;
        cout<<"____________________\n";

    }

    void SendEmail(const string &Subject ,const string &Body)
    {
     cout<<"\n\nThe following message was sent successfully to email address : "<<_Email<<endl;

     cout<<"Subject: "<<Subject<<endl;
     cout<<"Message Body: "<<Body<<endl;
    }

    void SendSMS(const string &Message)
    {
      cout<<"\n\nThe following message was sent successfully to phone number : "<<_PhoneNumber<<endl;
      cout<<"Message Body : "<<Message<<endl;
    }
};


class clsEmployee : public clsPerson
{

 private:
   
   string _Department;
   string _Title;
   float _Salary;

 public:

   void SetDepartment(const string &Department)
   {
     _Department = Department;
   }

   void SetTitle(const string &Title)
   {
     _Title = Title;
   }

   void SetSalary(const float &Salary)
   {
     _Salary = Salary;
   }
   
   string Department()
   {
     return _Department;
   }

   string Title()
   {
     return _Title;
   }

   float Salary()
   {
     return _Salary;
   }
  
};

int main()
{
    
    clsEmployee Employee1;
    
    Employee1.SetDepartment("Technology");
    Employee1.SetFirstName("James");
    Employee1.SetLastName("Bond");
    Employee1.SetPhoneNumber("2354325");
    Employee1.SetTitle("CEO");

    Employee1.Print();

    
    system("pause>0");
}