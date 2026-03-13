#include<iostream>
#include<string>
#include<fstream>
using namespace std;

const string ClientsFileName = "ClientsData.txt";

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

 cout<<"+++Taking Client Data+++\n\n";

 cout<<"Enter AccNumber : ";
 getline(cin >> ws,Client.AccNumber);

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

void AddLineToFile(string &Line ,string FileName)
{
    fstream MyFile;

    MyFile.open(FileName,ios::app);

    if(MyFile.is_open())
    {
     MyFile<<Line<<endl;
    }
   MyFile.close();
}

void AddNewClient()
{
 stClient Client;
 string Line;

 Client = ReadClientData();

 Line = ConvertRecordToLine(Client);

 AddLineToFile(Line,ClientsFileName);
}

void AddClients()
{
  char Choice;

  do
  {
    system("cls");

    cout<<"Adding new client :\n\n";
     
    AddNewClient();

    cout<<"\nClient Added Successfully, Do you want to add more clients? (y/n) : ";
    cin>>Choice;

  } while (toupper(Choice) == 'Y');

  cout<<"\nAll Clients Have been Added Successfully !!!";
}

int main()
{
 AddClients();
}