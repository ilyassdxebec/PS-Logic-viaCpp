#include<iostream>
#include<cmath>
using namespace std;
struct stRectangle{
  float diagonal,side;
};
stRectangle GetInfo(){
    stRectangle rectangle1;
    cout<<"Enter rectangle's diagonal: ";
    cin>>rectangle1.diagonal;
    cout<<endl<<"Enter rectangle's side length: ";
    cin>>rectangle1.side;
    return rectangle1;
}
float CalculateRectangleArea(stRectangle rectangle1){
      float area = rectangle1.side*sqrt(pow(rectangle1.diagonal,2)-pow(rectangle1.side,2));
      return area;
}
void PrintArea(float area){
    cout<<"\nThe area of the rectangle is: "<<area;
}
int main(){
   PrintArea(CalculateRectangleArea(GetInfo()));
}