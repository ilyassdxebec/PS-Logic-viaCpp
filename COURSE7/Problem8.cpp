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

void MulitplyTwoMatrices(int arr1[3][3],int arr2[3][3],int result[3][3],short Rows,short Columns)
{
  for(short i=0;i<Rows;i++)
  {
    for(short j=0;j<Columns;j++)
    {
      result[i][j] = arr1[i][j] * arr2[i][j];
    }
  }
}

int main()
{
    srand(unsigned(time(NULL)));

    int arr1[3][3],arr2[3][3],arr3[3][3];

    FillMatrixWithRandomNumbers(arr1,3,3);

    cout<<"\nMatrix 1 : "<<endl;

    PrintMatrix(arr1,3,3);

    FillMatrixWithRandomNumbers(arr2,3,3);

    cout<<"\nMatrix 2 : "<<endl;

    PrintMatrix(arr2,3,3); 
    
    MulitplyTwoMatrices(arr1,arr2,arr3,3,3);

    cout<<"\nMatrix 3 : "<<endl;

    PrintMatrix(arr3,3,3);
    
}