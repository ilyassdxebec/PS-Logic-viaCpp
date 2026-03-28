#include <iostream>
#include<string>
#include<vector>
using namespace std;

struct stDate
{
    int Year;
    int Month;
    int Day;
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

stDate ConvertStringToDate(const vector<string>&vDate)
{
  stDate Date;

  Date.Day = stoi(vDate.at(0));
  Date.Month = stoi(vDate.at(1));
  Date.Year = stoi(vDate.at(2));

  return Date;
}

string DateToString(const stDate &Date ,const string &delim = "/")
{
  string S = "";

  S += to_string(Date.Day) + delim;
  S += to_string(Date.Month) + delim;
  S += to_string(Date.Year);

  return S;
}

int main()
{ 
  stDate Date;

  string StringDate;
  
  cout<<"Please enter Date dd/mm/yyyy? ";
  cin>>StringDate;
  
  Date = ConvertStringToDate(SplitString(StringDate ,"/"));
  
  cout<<"\nYou entered : "<<Date.Day<<"/"<<Date.Month<<"/"<<Date.Year;

  cout<<"\n You entered : "<<DateToString(Date);
}