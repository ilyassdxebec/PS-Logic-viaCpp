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

int SumOfMatrixNumbers(int arr[3][3] ,short Columns ,short Rows)
{
  int Sum = 0;

  for(short i=0;i<Rows;i++)
  {
    for(short j=0;j<Columns;j++)
    {
      Sum += arr[i][j];
    }
  }
  return Sum;
}

string isMtrix1EqualMatrix2(int arr1[3][3] ,int arr2[3][3] ,short Rows ,short Columns)
{
  return (SumOfMatrixNumbers(arr1,3,3)==SumOfMatrixNumbers(arr2,3,3)) ? "\nYes, Matrix 1 is same as matrix 2 !" : "\nNo, Matrix 1 is not same as matrix 2 !";

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
    
    cout<<isMtrix1EqualMatrix2(arr,arr2,3,3);
    
}