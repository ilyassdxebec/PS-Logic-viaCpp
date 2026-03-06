#include <iostream>
#include <string>
#include <iomanip>
#include<vector>
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
            printf("%02d  ",arr[i][j]);
        }
        cout << "\n";
    }
}

bool isNumberInMatrix(int arr[3][3] ,short Columns ,short Rows ,int Number)
{
  for(short i=0;i<Rows;i++)
  {
    for(short j=0;j<Columns;j++)
    {
       if(arr[i][j] == Number)
       {
        return true;
       }
    }
  }
  return false;
}

void MatricesIntersection(int arr[3][3] , int arr2[3][3],short Columns ,short Rows)
{
  for(short i=0;i<Rows;i++)
  {
    for(short j=0;j<Columns;j++)
    {
        if(isNumberInMatrix(arr2,Columns,Rows,arr[i][j]))
        {
            cout<<arr[i][j]<<" ";    
        }
    }
  }
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[3][3] ,arr2[3][3];

    FillMatrixWithRandomNumbers(arr, 3, 3);

    cout << "\n The following is a 3x3 random matrix :\n";

    PrintMatrix(arr, 3, 3);
    
    FillMatrixWithRandomNumbers(arr2, 3, 3);

    cout << "\n The Second 3x3 random matrix :\n";

    PrintMatrix(arr2, 3, 3);

    cout<<"\nIntersected Numbers In both Matrices Are : ";
    
    MatricesIntersection(arr,arr2,3,3);
}