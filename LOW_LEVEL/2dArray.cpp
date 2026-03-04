#include<iostream>
using namespace std;

int main()
{
    int arr[3][4] = {{32,32,5,3},{43,23,5,3,},{43,25,3,9}};
    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
          cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}