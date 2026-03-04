#include<iostream>
#include<vector>
using namespace std;

int main()
{
  vector <int> vNumbers = {234,54,23,53,23,55,33};

   cout<<"Before deleting any elements: "<<endl;

    for(int &emp : vNumbers)
  {
    cout<<emp<<" ";
  }
  vNumbers.pop_back();

  cout<<"\nAfter poping one element: "<<endl;

      for(int &emp : vNumbers)
  {
    cout<<emp<<" ";
  }

  // !this is used to clear the whole vector vNumbers.clear();
  // ! you can use .clear() or .empty()  to check  
  
}