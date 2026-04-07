#include<iostream>
using namespace std;

class clsCalculator
{
 private:

  float _Result = 0;
  float _LastNumber = 0;
  float _PreviousResult = 0;
  string _LastOperation = "Clear";

  bool _IsZero(const float &Number)
  {
    return (Number == 0) ;
  }
 
 public:
  
  void Add(float Number)
  {
    _LastOperation = "Adding";

    _LastNumber = Number;
    _PreviousResult = _Result;
    _Result += Number;
  }
  
  void Subtract(float Number)
  {
    _LastOperation = "Subtracting";

    _LastNumber = Number;
    _PreviousResult = _Result;
    _Result -= Number;
  }

  void Multiply(float Number)
  {
    _LastOperation = "Multiplying";

    _LastNumber = Number;
    _PreviousResult = _Result;
    _Result *= Number;
  }

  void Divide(float Number)
  {
    _LastOperation = "Dividing";
    
    if(_IsZero(Number))
      Number = 1;

    _LastNumber = Number;
    _PreviousResult = _Result;
    _Result /= Number;
  }
  
  void Clear()
  {
    _LastOperation = "Clearing";

    _LastNumber = 0;
    _PreviousResult = 0;
    _Result = 0 ;
  }

  void CancelLastOperation()
  {
    _LastOperation = "Cancelling Last Operation";

    _Result = _PreviousResult;
    _LastNumber = 0;
  }
  
  void PrintResult()
  {
   cout<<"Result After "<<_LastOperation<<" "<<_LastNumber<<" is : "<<_Result<<endl;
  }

};

int main()
{

clsCalculator Calculator1;

Calculator1.Clear();

Calculator1.Add(10);
Calculator1.PrintResult();

Calculator1.Add(100);
Calculator1.PrintResult();

Calculator1.Subtract(20);
Calculator1.PrintResult();

Calculator1.Divide(0);
Calculator1.PrintResult();

Calculator1.Divide(2);
Calculator1.PrintResult();

Calculator1.Multiply(3);
Calculator1.PrintResult();

Calculator1.CancelLastOperation();
Calculator1.PrintResult();

Calculator1.Clear();
Calculator1.PrintResult();

system("pause");
}