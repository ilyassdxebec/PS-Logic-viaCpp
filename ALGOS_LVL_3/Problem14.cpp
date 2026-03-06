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
            printf("%02d  ",arr[i][j]);
        }
        cout << "\n";
    }
}

bool isScalarMatrix(int arr[3][3] ,short Columns ,short Rows)
{
  int FirstDigit = arr[0][0];

  for(short i=0;i<Rows;i++)
  {
    for(short j=0;j<Columns;j++)
    {
        if((i==j && arr[i][j]!=FirstDigit) || (i!=j && arr[i][j]!=0))
        {
           return false;
        }
    }
  }
  return true;
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[3][3];
    FillMatrixWithRandomNumbers(arr, 3, 3);

    cout << "\n The following is a 3x3 random matrix :\n";

    PrintMatrix(arr, 3, 3);
    
    cout<< ((isScalarMatrix(arr,3,3)) ? "\nYes, The Matrix is a Scalar Matrix!" : "\nNo, The Matrix is not a Scalar Matrix!");
    
}