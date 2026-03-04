#include<iostream>
#include<cmath>
using namespace std;
const float P = 3.14;
float GetCircleInfo(){
    float radius;
    cout<<"Enter radius of the circle: ";
    cin>>radius;
    return radius;
}
float CalculateCircleArea(float radius){
    float area = P*pow(radius,2);
    return area;
}
void PrintCircleArea(float area){
    cout<<"The area of the circle is:  "<<area;
}
int main(){
 PrintCircleArea(CalculateCircleArea(GetCircleInfo()));
}