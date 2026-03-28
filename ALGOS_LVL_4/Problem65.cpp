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

string ReplaceWordInString(string S1, string StringToReplace, string sRepalceTo)
{

  short pos = S1.find(StringToReplace);

    while(pos != std::string::npos)
    {
       S1 = S1.replace(pos, StringToReplace.length(), sRepalceTo);
       pos = S1.find(StringToReplace);//find next
    }

  return S1;
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

string FormateDate(const stDate &Date ,string Format = "dd/mm/yyyy")
{
  string FormatedDate = "";

  FormatedDate = ReplaceWordInString(Format ,"dd",to_string(Date.Day));
  FormatedDate = ReplaceWordInString(FormatedDate ,"mm",to_string(Date.Month));
  FormatedDate = ReplaceWordInString(FormatedDate ,"yyyy",to_string(Date.Year));

  return FormatedDate;
}

int main()
{ 
  stDate Date;

  string StringDate;
  
  cout<<"Please enter Date dd/mm/yyyy? ";
  cin>>StringDate;
  
  Date = ConvertStringToDate(SplitString(StringDate ,"/"));
  
  cout<<"\nYou entered : "<<Date.Day<<"/"<<Date.Month<<"/"<<Date.Year;
  
  cout<<"\nFormated Date is : "<<FormateDate(Date ,"yyyy/dd/mm");
}