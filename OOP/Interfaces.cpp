#include<iostream>
using namespace std;

class clsLivingBeing
{
 public:

  virtual void Eat() = 0;
  virtual void Sleep() = 0;
  virtual void Die() = 0;
  virtual void Born() = 0;
  virtual void Survive() = 0;

};

class clsHuman : public clsLivingBeing
{
 public:
 
  void Eat()
  {
    cout<<"Every Human Has To Eat!\n";
  }

  void Sleep()
  {
    cout<<"Every Human Has To Sleep!\n";

  }

  void Die()
  {
    cout<<"Every Human Has To Die!\n";

  }

  void Born()
  {
    cout<<"Every Human Is born!\n";

  }

  void Survive()
  {
    cout<<"Every Human Strive to Survive!\n\n";

  }
};

class clsLion : public clsLivingBeing
{
 public:
 
  void Eat()
  {
    cout<<"Every Lion Has To Eat!\n";
  }

  void Sleep()
  {
    cout<<"Every Lion Has To Sleep!\n";

  }

  void Die()
  {
    cout<<"Every Lion Has To Die!\n";

  }

  void Born()
  {
    cout<<"Every Lion Is born!\n";

  }

  void Survive()
  {
    cout<<"Every Lion Strive to Survive!\n\n";

  }
};

int main()
{

 clsHuman Human1;

 Human1.Die();
 Human1.Sleep();
 Human1.Born();
 Human1.Eat();
 Human1.Survive();

 clsLion Lion1;

 Lion1.Die();
 Lion1.Sleep();
 Lion1.Born();
 Lion1.Eat();
 Lion1.Survive();

 system("pause>0");

}