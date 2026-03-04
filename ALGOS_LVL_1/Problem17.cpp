#include<iostream>
using namespace std;
  void GetTriangleInfo(float &a,float &h){
     cout<<"Enter height of triangle: ";
     cin>>h;
     cout<<"\nEnter side length of triangle: ";
     cin>>a;
  }
  float CalculateTriangleArea(float a,float h){
      float area = (0.5)*a*h;
      return area;
  }
  void PrintTriangleArea(float area){
      cout<<"\nThe area of the triangle is: "<<area;
  }
int main(){
   float a,h;
   GetTriangleInfo(a,h);
   PrintTriangleArea(CalculateTriangleArea(a,h));

}