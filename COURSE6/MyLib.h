#include<iostream>
#include<limits>
using namespace std;

namespace MyLib
{


 bool CheckNumberSign(int Number)
 {
  return Number>0;
 }



 int ReadNumberOnly(string message)
{
    int Number;
    cout<< message;
    cin>>Number;
    cout<<endl;
    
    while(cin.fail())
   {
     cin.clear();
     cin.ignore(numeric_limits<streamsize>::max(),'\n');
     cout<<"Invalid Number, Enter a valid one: ";
     cin>>Number;
   }    
    return Number;
}


int ReadNumber(string message)
{
    int number;
        cout << endl << message;
        cin >> number;
        cout<<endl;
    return number;
}
}