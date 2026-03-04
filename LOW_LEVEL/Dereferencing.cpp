#include<iostream>
using namespace std;

int main()
{
    int a = 32;
    int *p = &a;

    cout<<"value of a is :"<<a<<endl;
    cout<<"adress of a is : "<<p<<endl;

    cout<<"value of a using pointer is : "<<*p<<endl;
    *p = 999;

    cout<<"value of a after changing it using dereferencing is : "<<a<<endl;
    cout<<"same value using pointer : "<<*p;
}