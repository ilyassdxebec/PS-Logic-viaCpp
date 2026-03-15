//TODO reading from txt file to table 

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

void PrintTableHeader(const vector <stClient> &Clients)
{
  cout<<"\n++++++++++++Clients List has ("<<Clients.size()<<") Client(s)++++++++++++\n\n";  
}

void PrintTableColumns()
{ 
 cout<<"|________________|_____________|_______________________|________________|________________\n";
 cout<<"| Account Number | PinCode     | Client Name           | Phone          | Balance  \n";
 cout<<"|________________|_____________|_______________________|________________|________________\n"; 
}

void PrintClientInfo(const stClient &Client)
{
    cout << "|" << left << setw(16) << Client.AccNumber
         << "|" << left << setw(13) << Client.PinCode
         << "|" << left << setw(23) << Client.Name
         << "|" << left << setw(16) << Client.PhoneNumber
         << "|" << left << setw(15) << Client.AccBalance << endl;  
}

void PrintTable(const vector <stClient> &Clients)
{
    
 PrintTableHeader(Clients);

 PrintTableColumns();

 for(const stClient &x : Clients)
 {
   PrintClientInfo(x);
 }

 cout<<"|________________|_____________|_______________________|________________|________________\n"; 
}

int main()
{
  vector<stClient>Clients = LoadClientsDataFromFile(ClientsFileName);

  PrintTable(Clients);
}
