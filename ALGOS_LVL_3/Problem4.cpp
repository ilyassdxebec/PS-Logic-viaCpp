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
            arr[i][j] = RandomNumber(1, 100);
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

int ColumnSum(int arr[3][3], short Col,short Rows)
{
  int Sum = 0;

  for(short j=0;j<Rows;j++)
  {
    Sum += arr[j][Col];
  }
  return Sum;
}

void SumOfMatrixCols(int arr[3][3], short Rows, short Cols)
{
   for(short i=0;i<Cols;i++)
   {
     cout<<"\nColumn Number "<<i+1<<" Sum is : "<<ColumnSum(arr,i,Rows)<<endl;
   }
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[3][3];

    FillMatrixWithRandomNumbers(arr, 3, 3)
    ;
    cout << "\n The following is a 3x3 random matrix:\n";

    PrintMatrix(arr, 3, 3);
    
    SumOfMatrixCols(arr,3,3);
}