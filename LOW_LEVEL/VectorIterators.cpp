#include<iostream>
#include<vector>
using namespace std;

int main()
{
  vector <int> vNumbers = {2,43,544,323,33,3,9,99};
  vector<int>::iterator vIter;

  for(vIter = vNumbers.begin(); vIter != vNumbers.end() ;vIter++)
  {
    cout<<*vIter<<" ";
  }
}