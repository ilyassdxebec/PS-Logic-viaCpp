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

int main()
{
  
    clsPerson Person1(23 ,"Somebody" ,"Unkown" ,"ComeSeeMe@gmail.com" ,"3463565643");
   
    Person1.Print();

    Person1.SendEmail("Excited" ,"I'm excited to meet you!");
    Person1.SendSMS("Hello when can we meet!");

    system("pause>0");
}