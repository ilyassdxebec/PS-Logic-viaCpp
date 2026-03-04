#include<iostream>
#include<iomanip>
using namespace std;

void FillMatrixWithOrderedNumbers(int arr[3][3],short Rows,short Columns)
{
    short Counter = 0;

  for(short i=0;i<Rows;i++)
  {
      for(short j=0;j<Columns;j++)
      {
        Counter++;

        arr[i][j] = Counter;

      } 
  }
    
}

void PrintMatrix(int arr[3][3],short Rows, short Columns)
{
  for(short i=0;i<Rows;i++)
  {
    for(short j=0;j<Columns;j++)
    {
      cout<<setw(3)<<arr[i][j]<<"\t";
    }
    cout<<endl;
  }
}

void TransposeMatrix(int arr[3][3] ,short Rows ,short Columns ,int Transposed[3][3])
{

   for(short i=0;i<Rows;i++)
  {
    for(short j=0;j<Columns;j++)
    {
      Transposed[i][j] = arr[j][i]; 
    }
  }
}

int main()
{
  int arr[3][3],Transposed[3][3];

  FillMatrixWithOrderedNumbers(arr,3,3);
  
  cout<<"Before Transposing Matrix :"<<endl;

  PrintMatrix(arr,3,3);
  
  TransposeMatrix(arr,3,3,Transposed);

  cout<<"After Transposing Matrix :"<<endl;

  PrintMatrix(Transposed,3,3);

}
