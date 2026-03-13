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

vector<string> SplitString(string S ,string delim = " ")
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

stClient ConverLineToRecord(const string &Line,string delim = "#//#")
{

 stClient ClientData;
 vector<string>temp = SplitString(Line,delim);

 ClientData.AccNumber = temp.at(0);
 ClientData.PinCode = temp.at(1);
 ClientData.Name = temp.at(2);
 ClientData.PhoneNumber = temp.at(3);
 ClientData.AccBalance = stod(temp.at(4));

 return ClientData;
}

void DisplayClientData(const stClient &Client)
{
 cout<<"AccNumber : "<<Client.AccNumber<<endl;
 cout<<"PinCode : "<<Client.PinCode<<endl;
 cout<<"Name : "<<Client.Name<<endl;
 cout<<"PhoneNumber : "<<Client.PhoneNumber<<endl;
 cout<<"AccBalance : "<<Client.AccBalance<<endl;
}

int main()
{
  string Line = "A324#//#234#//#ilyass#//#324234#//#3432.320000";

  stClient Client = ConverLineToRecord(Line,"#//#");

  cout<<"\n_____The Following is the extracted client record_____\n\n";

  DisplayClientData(Client);
}