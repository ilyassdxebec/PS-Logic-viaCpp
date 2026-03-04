#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector <int> vNumbers = {2,43,52,553,63,6};
    //vector is an array but just dynamic

    for(int &number : vNumbers)
    {
        cout<<number<<" ";
    }
}