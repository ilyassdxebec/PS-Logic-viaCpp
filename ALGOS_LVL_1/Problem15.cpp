#include<iostream>
using namespace std;
struct stRectange{
   int height;
   int weidth;
};
    stRectange GetRectangleInfo(){
    stRectange rectangle1;
    cout<<"Enter Rectangle's height: ";
    cin>>rectangle1.height;
     cout<<"\nEnter Rectangle's weidth: ";
    cin>>rectangle1.weidth;
     return rectangle1;
  }
  float CalculateRectangleArea(stRectange rectangle1){
     float Area = rectangle1.height*rectangle1.weidth;
     return Area;
  }
  void PrintArea(float Area){
    cout<<"\nthe rectangle's Area is: "<<Area;
  }
int main(){

    PrintArea(CalculateRectangleArea(GetRectangleInfo()));
}