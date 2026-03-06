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

short NumberFrequencyInMatrix(int arr[3][3] ,short Columns ,short Rows ,int Number)
{
  short Frequency = 0;

  for(short i=0;i<Rows;i++)
  {
    for(short j=0;j<Columns;j++)
    {
       if(arr[i][j] == Number)
       {
        Frequency++;
       }
    }
  }
  return Frequency;
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[3][3] ,Number;
    FillMatrixWithRandomNumbers(arr, 3, 3);

    cout << "\n The following is a 3x3 random matrix :\n";

    PrintMatrix(arr, 3, 3);
    
    cout<<"\nEnter the number you want to see it's frequency in the matrix : ";
    cin>>Number;

    cout<<endl<<Number<<" is repeated "<<NumberFrequencyInMatrix(arr,3,3,Number)<<" in times the Matrix !";
}