#include<iostream>
using namespace std;

int main()
{
    int arr[10][10];
    
    for(int i=1;i<=10;i++)
    {
        for(int j=1;j<=10;j++)
        {
          arr[i-1][j-1] = i*j;
          printf("%0*d ", 2, arr[i-1][j-1]);
        }
        cout<<endl;
    }
}