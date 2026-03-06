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

bool Are_2_MatricesI_dentical(int arr[3][3] ,int arr2[3][3] ,short Columns ,short Rows)
{

  for(short i=0;i<Rows;i++)
  {
    for(short j=0;j<Columns;j++)
    {
      if(arr[i][j]!=arr2[i][j])
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

    int arr[3][3],arr2[3][3];

    FillMatrixWithRandomNumbers(arr, 3, 3);

    cout << "\n The following is a 3x3 random matrix :\n";

    PrintMatrix(arr, 3, 3);

    FillMatrixWithRandomNumbers(arr2,3,3);

    cout << "\n The following is a 3x3 random matrix 2 :\n";

    PrintMatrix(arr2, 3, 3);
    
    cout<< ((Are_2_MatricesI_dentical(arr,arr2,3,3)) ? "\nYes, Matrix 1 is identical to Matrix 2!" : "\nNo, Matrix 1 is not identical to  Matrix 2!");
    
}