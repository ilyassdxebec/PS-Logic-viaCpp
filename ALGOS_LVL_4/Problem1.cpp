#include<iostream>
#include<string>
using namespace std;

long long int ReadNumber()
{ 
  long long int Number;

  cout<<"Please enter a number : ";
  cin>>Number;
  cout<<endl;

  return Number;
}

string NumberToString(long long int Number)
{
  if(Number == 0)
  {
   return "";
  }

  if(Number >= 1 && Number <=19)
  {
    string arr[] = {"","One","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Eleven",
                    "Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Ninetenn"};
    return arr [Number] + " ";
  }

  if(Number >= 20 && Number <= 99)
  {
    string arr[] = {"","","Twenty ","Thirty ","Forty ","Fifty ","Sixty ","Seventy ","Eighty ","Ninety "};

    return arr [Number/10] + NumberToString(Number % 10);
  }
  
  if(Number >= 100 && Number <= 199)
  {
   return " One Hundred " + NumberToString(Number % 100); 
  }

  if(Number >= 200 && Number <= 999)
  {
    return NumberToString(Number/100) + "Hundreds " +  NumberToString(Number % 100);
  }
  
  if(Number >= 1000 && Number <= 1999)
  {
    return " One Thousand " + NumberToString(Number % 1000);
  }
  
  if(Number >= 2000 && Number <= 999999)
  {
    return NumberToString(Number / 1000) + "Thousands " + NumberToString(Number % 1000);
  }
  
  if(Number >= 1000000 && Number <= 1999999)
  {
    return " One Million " + NumberToString(Number % 1000000);
  }
  
  if(Number >= 2000000 && Number <= 999999999)
  {
    return NumberToString(Number / 1000000) + "Millions " + NumberToString(Number % 1000000);
  }
  
  if(Number >= 1000000000 && Number <= 1999999999)
  {
    return " One Billion " + NumberToString(Number % 1000000000);
  }

  if(Number >= 2000000000 && Number <= 999999999999)
  {
     return NumberToString(Number / 1000000000) + "Billions " + NumberToString(Number % 1000000000);
  }

  return "";
}

int main()
{
  cout<<NumberToString(ReadNumber());
}