#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector <int> vNumbers = {32,34,3,2,1};
    
    try
    {
        cout<<vNumbers.at(6);
    }
    catch(...)
    {
        cout<<"out of bound";
    }
    
}