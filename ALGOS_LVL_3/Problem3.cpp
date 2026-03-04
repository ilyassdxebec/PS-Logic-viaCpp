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

int SumMatrixRowUsingArray(int arr[3][3], short Row, short Cols)
{ 
    int Sum = 0;

   for(short j=0;j<Cols;j++)
   {
     Sum += arr[Row][j];
   }
   return Sum;
}

void SumOfMatrixRows(int arr[3][3], short Rows, short Cols,int SumArr[3])
{

   for (short i = 0; i < Rows; i++)
    {

       SumArr[i] = SumMatrixRowUsingArray(arr,i,Cols);

    }
}

void PrintArrayOfRows(int arr[3],short Rows)
{
   for(short i=0;i<Rows;i++)
   {
      cout<<"Sum of Row Number "<<i+1<<" is : "<<arr[i]<<endl;
   }
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[3][3], SumArr[3];

    FillMatrixWithRandomNumbers(arr, 3, 3)
    ;
    cout << "\n The following is a 3x3 random matrix:\n";

    PrintMatrix(arr, 3, 3);
     
    cout<<endl;

    SumOfMatrixRows(arr,3,3,SumArr);

   PrintArrayOfRows(SumArr,3);
}