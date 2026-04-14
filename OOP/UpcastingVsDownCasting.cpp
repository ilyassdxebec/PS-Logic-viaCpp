#include<iostream>
using namespace std;

class clsPerson
{
 public:

  string FullName = "Greatest Of All Time";
};

class clsEmployee : public clsPerson
{

 public:

  string Job = "Jobless";   
};

int main()
{
 
 clsEmployee Employee1;

 //This is Upcasting
 clsPerson *Person1 = &Employee1;
 
 cout<<Person1->FullName;
  
 //This is DownCasting (it's impossible)
 //clsEmployee *Employee2 = &Person2;

 system("pause>0");
}