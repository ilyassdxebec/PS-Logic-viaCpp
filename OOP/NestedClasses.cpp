#include<iostream>
using namespace std;

class clsPerson
{
 private:
  
  class _clsAdress
  {
    private:

    string _Country;
    string _City;
    string _ZipCode;
    string _Avenue;
   
    public:
        
        _clsAdress(string Country ,string City ,string ZipCode ,string Avenue)
        {
          _Country = Country;
          _City = City;
          _ZipCode = ZipCode;
          _Avenue = Avenue;
        }

        string ZipCode()
        {
            return _ZipCode;
        }

        string Avenue()
        {
            return _Avenue;
        }

        string Country()
        {
            return _Country;
        }

        string City()
        {
            return _City;
        }

        void SetCountry(string Country)
        {
            _Country = Country;
        }

        void SetCity(string City)
        {
            _City = City;
        }

        void SetAvenue(string Avenue)
        {
            _Avenue = Avenue;
        }

        void SetZipCode(string ZipCode)
        {
            _ZipCode = ZipCode;
        }

        void Print()
        {
            cout<<"____________INFO____________\n\n";
        
            cout<<"Country : "<<_Country<<endl;
            cout<<"City    : "<<_City<<endl;
            cout<<"Avenue  : "<<_Avenue<<endl;
            cout<<"ZipCode : "<<_ZipCode<<endl;
            cout<<"____________________________\n\n";    
        }
  };

  int _ID;

  public:
  
  _clsAdress _Adress = _clsAdress("" ,"" ,"" ,"");

  clsPerson(string Country ,string City ,string ZipCode ,string Avenue ,int ID)
  {
   _ID = ID;
   _Adress = _clsAdress(Country ,City ,ZipCode ,Avenue);
  }

  int ID()
  {
    return _ID;
  }

  void SetId(int ID)
  {
   _ID = ID;
  }

};


int main()
{
 
 clsPerson Person1("China" ,"Wuhan" ,"435345" ,"Avenue" ,324);
 
 Person1._Adress.Print();
 
 system("pause>0");
}