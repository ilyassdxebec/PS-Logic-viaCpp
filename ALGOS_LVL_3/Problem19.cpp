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

int MinNumberInMatrix(int arr[3][3] ,short Rows ,short Columns)
{
    int MinNumber = arr[0][0];

     for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Columns; j++)
        {
              if(arr[i][j]<MinNumber)
              {
                MinNumber = arr[i][j];
              }
        }
    }
    return MinNumber;
}

int MaxNumberInMatrix(int arr[3][3] ,short Rows ,short Columns)
{
    int MaxNumber = arr[0][0];

     for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Columns; j++)
        {
              if(arr[i][j]>MaxNumber)
              {
                MaxNumber = arr[i][j];
              }
        }
    }
    return MaxNumber;
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[3][3];

    FillMatrixWithRandomNumbers(arr, 3, 3);

    cout << "\n The following is a 3x3 random matrix :\n";

    PrintMatrix(arr, 3, 3);
    
    cout<<"\nMax Number in the Matrix is "<<MaxNumberInMatrix(arr,3,3)<<" and Min Number is "<<MinNumberInMatrix(arr,3,3);
}