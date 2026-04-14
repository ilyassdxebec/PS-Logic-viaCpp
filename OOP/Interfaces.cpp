#include<iostream>
using namespace std;

class clsMobile
{
 public:

  virtual void Color(const string &Color) = 0;
  virtual void Price(const float &Price) = 0;
  virtual void Weight(const int &Weight) = 0;

};

class clsIphone : public clsMobile
{

 public:

    void Color(const string &Color)
    {

    }

    void Price(const float &Price)
    {

    }

    void Weight(const int &Weight)
    {

    }

};

int main()
{
     
 clsIphone Iphone1;

 cout<<"Hello loser";

 system("pause>0");

}