#include<iostream>
#include<string>
using namespace std;

struct stClient
{
 string AccNumber;
 string PinCode;
 string Name;
 string PhoneNumber;
 double AccBalance;
};

stClient ReadClientData()
{
 stClient Client;

 cout<<"Please Enter Client Data : "<<endl;

 cout<<"Enter AccNumber : ";
 getline(cin,Client.AccNumber);

 cout<<"Enter PinCode : ";
 getline(cin,Client.PinCode);

 cout<<"Enter Name : ";
 getline(cin,Client.Name);

 cout<<"Enter PhoneNumber : ";
 getline(cin,Client.PhoneNumber);

 cout<<"Enter Account Balance : ";
 cin>>Client.AccBalance;

 return Client;
}

string ConvertRecordToLine(stClient Client ,string delim = "#//#")
{
  string Line = "";

  Line += Client.AccNumber + delim;
  Line += Client.PinCode + delim;
  Line += Client.Name + delim;
  Line += Client.PhoneNumber + delim;
  Line += to_string(Client.AccBalance);

  return Line;
}

int main()
{
  stClient Client = ReadClientData();

  cout<<"\n_____Client Record for Saving is_____\n\n"<<ConvertRecordToLine(Client);
}