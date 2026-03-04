#include<iostream>
#include<vector>
using namespace std;

void ReadNumbers(vector<int> &vNumbers)
{
    char Choice;
    int number;

  do{
   cout<<"Please enter a number: ";
   cin>>number;
   vNumbers.push_back(number);
   cout<<endl<<"Do you want to add anohter number? (y/n)";
   cin>>Choice;
   cout<<endl;
  }while(Choice=='Y'||Choice=='y');
}

void PrintNumbers(vector<int> &vNumbers)
{
     cout<<"The numbers you entered are: ";
   for(int &number : vNumbers)
   {
      cout<<number<<" ";
   }
}

int main()
{
 vector <int> vNumbers;
 ReadNumbers(vNumbers);
 PrintNumbers(vNumbers);

}