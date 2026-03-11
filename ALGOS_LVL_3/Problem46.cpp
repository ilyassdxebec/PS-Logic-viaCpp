#include<iostream>
#include<string>
#include<vector>
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

vector<stClient> ConverLineToRecord(string Line,string delim = "#//#")
{
 
}

int main()
{
  cout<<"\n_____The Following is the extracted client record_____\n\n";
}