#include<iostream>
#include<vector>
using namespace std;

class clsA
{
 public:
  
  clsA(int value)
  {
   x = value;
  }

  int x;

  void Print()
  {
    cout<<"The value of x is : "<<x<<endl;
  }
};

int main()
{
 vector <clsA> vA;

 for(short i=0 ;i<5 ;i++)
 {
  vA.push_back(clsA(i));
 }

 for(short i=0 ;i<5 ;i++)
 {
  vA.at(i).Print();
 }
 
 system("pause>0");
}