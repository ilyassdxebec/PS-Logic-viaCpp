#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            arr[i][j] = RandomNumber(1, 10);
        }
    }
}

void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            cout << setw(3) << arr[i][j] << " ";
        }
        cout << "\n";
    }
}

void PrintMidRowOfMatrix(int arr[3][3],short Rows ,short Columns)
{
  for(short i=0;i<Rows;i++)
  {
    for(short j=0;j<Columns;j++)
    {
       if(i==Rows/2)
       {
        cout<<setw(3)<<arr[i][j]<<"\t";
       }
    }
  }
}

void PrintMidColumnOfMatrix(int arr[3][3] ,short Rows ,short Columns)
{
   for(short i=0;i<Rows;i++)
  {
    for(short j=0;j<Columns;j++)
    {
       if(i==Rows/2)
       {
        cout<<setw(3)<<arr[j][i]<<"\t";
       }
    }
  }
}

int main()
{
    srand(unsigned(time(NULL)));

    int arr[3][3];

    FillMatrixWithRandomNumbers(arr,3,3);

    cout<<"\nMatrix is: "<<endl;

    PrintMatrix(arr,3,3);
    
    cout<<"\nMatrix Mid Row is : "<<endl;

    PrintMidRowOfMatrix(arr,3,3);

    cout<<"\nMatrix Mid Column is : "<<endl;

    PrintMidColumnOfMatrix(arr,3,3);
}