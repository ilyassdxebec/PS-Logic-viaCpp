#include<iostream>
using namespace std;

class clsEmployee
{

 private:

  int    _ID;
  string _FirstName;
  string _LastName;
  string _Email;
  string _PhoneNumber;
  string _Title;
  string _Department;
  float  _Salary;

 public:

    clsEmployee(const int &ID ,const string &FirstName ,const string &LastName ,const string &Email ,const string &PhoneNumber ,const string &Deprtment ,const float &Salary ,const string &Title)
    {
      _ID = ID;
      _FirstName = FirstName;
      _LastName = LastName;
      _Email = Email;
      _PhoneNumber = PhoneNumber;
      _Title = Title;
      _Salary = Salary;
      _Department = Deprtment;
    }

    int ID()
    {
        return _ID;
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
    
    void SetTitle(const string &Title)
    {
     _Title = Title;
    }

    void SetDepartment(const string &Department)
    {
     _Department = Department;
    }

    void SetSalary(const float &Salary)
    {
     _Salary = Salary;
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
        cout<<"Salary : "<<_Salary<<endl;
        cout<<"Department : "<<_Department<<endl;
        cout<<"Title : "<<_Title<<endl;
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

int main()
{
  
    clsEmployee Employee1(23 ,"Somebody" ,"Unkown" ,"ComeSeeMe@gmail.com" ,"3463565643" ,"Business" ,43653.34 ,"Business Manager");
   
    Employee1.Print();

    Employee1.SendEmail("Excited" ,"I'm excited to meet you!");
    Employee1.SendSMS("Hello when can we meet!");

    system("pause>0");
}