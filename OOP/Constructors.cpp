#include<iostream>
using namespace std;

class clsAdress
{
 private:
  
  string _AdressLine1;
  string _AdressLine2;
  string _POBox;
  string _ZipCode;

 public:

  clsAdress(string AdressLine1 ,string AdressLine2 ,string POBox ,string ZipCode)
  {
    _AdressLine1 = AdressLine1;
    _AdressLine2 = AdressLine2;
    _POBox = POBox;
    _ZipCode = ZipCode;
  }
  
  void SetAdressLine1(const string &AdressLine1)
  {
   _AdressLine1 = AdressLine1;
  }

  void SetAdressLine2(const string &AdressLine2)
  {
   _AdressLine2 = AdressLine2;
  }
  
  void SetPOBox(const string &POBox)
  {
   _POBox = POBox;
  }
  
  void SetZipCode(const string &ZipCode)
  {
   _ZipCode = ZipCode;
  }  

  string AdressLine1()
  {
    return _AdressLine1;
  }

  string AdressLine2()
  {
    return _AdressLine2;
  }
  
  string POBox()
  {
    return _POBox;
  }
  
  string ZipCode()
  {
    return _ZipCode;
  }  

  void PrintAdress()
  {
    cout<<"+++ Adress is +++\n\n";
    
    cout<<"AdressLine1 is : "<<_AdressLine1<<endl;
    cout<<"AdressLine2 is : "<<_AdressLine2<<endl;
    cout<<"POBox is : "<<_POBox<<endl;
    cout<<"ZipCode is : "<<_ZipCode<<endl;
  }

};

int main()
{
  clsAdress Adress1("China" ,"Wuhan" ,"Whatever" ,"4534654");

  Adress1.PrintAdress();
  
  system("pause>0");
}