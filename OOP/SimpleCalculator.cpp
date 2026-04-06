#include<iostream>
using namespace std;

class clsCalculator
{
 private:
  
  enum enOperationType  {enAdd = 1 ,enSubtract = 2 ,enMultiply = 3 ,enDivide = 4 ,enClear = 5};

  int _Value = 0;
  int _Number = 0;
  enOperationType OperationNumber;

  string OperationName(enOperationType OpType)
  {
    switch (OpType)
    {
    case enAdd:
        return "Adding";
    
    case enSubtract:
        return "Subtracting";

    case enClear:
        return "Clearing";
        
    case enMultiply:
        return "Multiplying";
        
    case enDivide:
        return "Dividing";
        
        
    default:
        return "Unkown Operation!";
    }
  }
  
 public:

  void Clear()
  {
    _Value = 0;
    OperationNumber = enClear; 
  }
  
  void Add(int Number)
  { 
    _Number = Number;
    _Value += Number;
    OperationNumber = enAdd;
  }

  void Subtract(int Number)
  {

    _Number = Number;
    _Value -= Number;
    OperationNumber = enSubtract;
  }

  void Multiply(int Number)
  {
    _Number = Number;
    _Value *= Number;
    OperationNumber = enMultiply;
  }

  void Divide(int Number)
  { 
    if(Number == 0)
       Number = 1;

    _Number = Number;
    _Value /= Number;
    OperationNumber = enDivide;
  }
  
  void PrintResult()
  {
    cout<<"Result After "<<OperationName(OperationNumber)<<" "<<_Number<<" is : "<<_Value<<endl;
  }
};

int main()
{
 clsCalculator Calculator1;

 Calculator1.Clear();
 Calculator1.PrintResult();
 
 Calculator1.Add(54);
 Calculator1.PrintResult();

 Calculator1.Subtract(45);
 Calculator1.PrintResult();

 Calculator1.Divide(45);
 Calculator1.PrintResult();

 cout<<endl;
 system("pause");
}