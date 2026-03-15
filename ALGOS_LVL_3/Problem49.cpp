//TODO Find Client By AccNumber , And Print it If Existing

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
};

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
 getline(cin,S);

 return S;
}

bool FindClientWithAccNumber(stClient &Client ,string AccountNumber)
{
 vector<stClient>Clients = LoadClientsDataFromFile(ClientsFileName);

 for(const stClient &x : Clients)
 {
   if(x.AccNumber == AccountNumber)
   {
    Client = x;
    return true;
   }
 }
 return false;
}

int main()
{
    string AccountNumber = ReadAccountNumber();
    stClient Client;

    if(FindClientWithAccNumber(Client,AccountNumber))
    {
        PrintClientInfo(Client);
    }
    else
    {
      cout<<"\nClient with account number ("<<AccountNumber<<") is not found !";
    }
}