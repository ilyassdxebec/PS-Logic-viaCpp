#include<iostream>
using namespace std;

int main()
{
    int arr[3] = {3,24,5342};
    int *p = arr;

    cout<<"Adress of first element of array is : "<<p<<endl;
    cout<<"Value of first element of array is : "<<*p<<endl;

    cout<<"\n\n____Accessing all array elements using pointe____\n\n"<<endl;

    for(int i=0;i<3;i++)
    {
      cout<<"Value of elements "<<i+1<<" of array using pointer is : "<<*(p+i)<<endl;
    }
}