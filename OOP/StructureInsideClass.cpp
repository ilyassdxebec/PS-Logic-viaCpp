#include<iostream>
using namespace std;

struct stAdress
{
 string Country;
 string City;
 string ZipCode;
 string Avenue;
};

class clsPerson
{
 private:

  int _ID;
  stAdress _Adress;

 public:

  clsPerson(string Country ,string City ,string ZipCode ,string Avenue ,int ID)
  {
   _ID = ID;
   _Adress.Country = Country;
   _Adress.City = City;
   _Adress.Avenue = Avenue;
   _Adress.ZipCode = ZipCode;
  }

  string ZipCode()
  {
    return _Adress.ZipCode;
  }

  string Avenue()
  {
    return _Adress.Avenue;
  }

  string Country()
  {
    return _Adress.Country;
  }

  string City()
  {
    return _Adress.City;
  }

  int ID()
  {
    return _ID;
  }

  void SetId(int ID)
  {
   _ID = ID;
  }

  void SetCountry(string Country)
  {
    _Adress.Country = Country;
  }

  void SetCity(string City)
  {
    _Adress.City = City;
  }

  void SetAvenue(string Avenue)
  {
    _Adress.Avenue = Avenue;
  }

  void SetZipCode(string ZipCode)
  {
    _Adress.ZipCode = ZipCode;
  }

  void Print()
  {
    cout<<"____________INFO____________\n\n";
   
    cout<<"ID      :"<<_ID<<endl;
    cout<<"Country : "<<_Adress.Country<<endl;
    cout<<"City    : "<<_Adress.City<<endl;
    cout<<"Avenue  : "<<_Adress.Avenue<<endl;
    cout<<"ZipCode : "<<_Adress.ZipCode<<endl;
    cout<<"____________________________\n\n";    
  }
};


int main()
{
 clsPerson Person1("USA" ,"Florida" ,"346436" ,"Avenue Something" ,324);
 
 Person1.Print();

 system("pause>0");
}