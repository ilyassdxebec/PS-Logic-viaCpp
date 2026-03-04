#include<iostream>
using namespace std;

int main()
{
    int a = 12;
    int &x = a;

    cout<<a<<endl;
    cout<<x<<endl;

    cout<<&a<<endl;
    cout<<&x<<endl;
}