#include<iostream>
using namespace std;

class clsA
{
 private:

  int _Var1 = 34;

 public:

  int Func1()
  {
    return _Var1 - 10;
  }

  friend class clsB;

  friend int Sum(clsA A);
};

class clsB : public clsA
{
 public:

  void Func2(clsA A)
  {
    cout<<"Hello i can acess everything about class A because it give me permission im it's real friend "<<A._Var1;
  }
};

int Sum(clsA A)
{
 return A._Var1 + A.Func1();
}

int main()
{
 clsA A;
 clsB B;

 B.Func2(A);
 cout<<endl;
 cout<<Sum(A);

 system("pause>0");
}