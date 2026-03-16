//TODO : Update Client In file By Account Number

#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include<iomanip>
using namespace std;

const string ClientsFileName = "ClientsData.txt";

struct stClient
{
 string AccNumber;
 string PinCode;
 string Name;
 string PhoneNumber;
 double AccBalance;
 bool MarkForDelete = false;
};

stClient ReadClientData(string AccountNumber)
{
 stClient Client;

 cout<<"+++Taking Client Data+++\n\n";
 
 Client.AccNumber = AccountNumber;
 
 cin.ignore();
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

vector<string> SplitStringToWords(string S ,string delim = " ")
{

  vector<string>vWords;
  int pos = 0;
  string word;

  while((pos = S.find(delim)) != string::npos)
  {
    word = S.substr(0,pos);

    if(word != "")
    {
      vWords.push_back(word);
    }
    S.erase(0,pos+delim.length());
  }
  if(S != "")
  {
    vWords.push_back(S);
  }
  
  return vWords;
}

stClient ConvertLineToRecord(const string &Line,string delim = "#//#")
{

 stClient ClientData;
 vector<string>temp = SplitStringToWords(Line,delim);

 ClientData.AccNumber = temp.at(0);
 ClientData.PinCode = temp.at(1);
 ClientData.Name = temp.at(2);
 ClientData.PhoneNumber = temp.at(3);
 ClientData.AccBalance = stod(temp.at(4));

 return ClientData;
}

vector<stClient> LoadClientsDataFromFile(const string &FileName)
{
  fstream MyFile;
  vector<stClient>Clients;

  MyFile.open(FileName, ios::in);

  if(MyFile.is_open())
  {
    string Line;

    while (getline(MyFile, Line))
    {
       Clients.push_back(ConvertLineToRecord(Line));
    }
    MyFile.close();
  } 
  return Clients;
}

void PrintClientInfo(const stClient &Client)
{   
    cout<<"\nThe Following are the client details : "<<endl;
    cout<<"Account Number : "<<Client.AccNumber<<endl;
    cout<<"Pin Code : "<< Client.PinCode<<endl;
    cout<<"Phone Number : "<< Client.PhoneNumber<<endl;
    cout<<"Name : "<<Client.Name<<endl;
    cout<<"Account Balance : "<<Client.AccBalance<<endl;
}

string ReadAccountNumber()
{
 string S;

 cout<<"Please enter Client Account Number : ";
 cin>>S;

 return S;
}

bool FindClientWithAccNumber(stClient &Client ,string AccountNumber ,const vector <stClient> &vClients)
{

 for(const stClient &x : vClients)
 {
   if(x.AccNumber == AccountNumber)
   {
    Client = x;
    return true;
   }
 }
 return false;
}

string ConvertRecordToLine(const stClient &Client ,string delim = "#//#")
{
  string Line = "";

  Line += Client.AccNumber + delim;
  Line += Client.PinCode + delim;
  Line += Client.Name + delim;
  Line += Client.PhoneNumber + delim;
  Line += to_string(Client.AccBalance);

  return Line;
}

void SaveToFile(const string &FileName ,vector <stClient> &vClients)
{
    fstream MyFile;
    
    MyFile.open(FileName,ios::out);

    if(MyFile.is_open())
    {
     
     for(stClient &C : vClients)
     {
       if(C.MarkForDelete != true)
       {
         MyFile <<  ConvertRecordToLine(C) <<endl;
       }
     }

    }
   MyFile.close();
}

void UpdateClient(vector <stClient> &vClient ,string AccountNumber)
{
  for(stClient &C : vClient)
  {
    if(C.AccNumber == AccountNumber)
    {
      C = ReadClientData(AccountNumber);
      break;
    }
  }
}

void UpdateClientInFile(vector <stClient> &vClients ,const string &AccountNumber)
{
   stClient Client;
   char Choice;

    if(FindClientWithAccNumber(Client ,AccountNumber ,vClients))
    {
      PrintClientInfo(Client);

      cout<<"\nAre you sure you want to Update this Client file? (y/n)";
      cin>>Choice;
      
      if(toupper(Choice) == 'Y')
      {

        UpdateClient(vClients , AccountNumber);
        SaveToFile(ClientsFileName ,vClients);

        cout<<"\nClient Updated Successfully !";
      }
      else
      {
        cout<<"\nClient Not Updated !";
      }

    }
    else
    {
      cout<<"\nClinet Not Found !";
    }
}

int main()
{
    vector<stClient>vClients = LoadClientsDataFromFile(ClientsFileName);
    string AccountNumber = ReadAccountNumber();
    
    UpdateClientInFile(vClients ,AccountNumber);

    system("pause>0");
}