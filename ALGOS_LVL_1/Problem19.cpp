 #include<iostream>
#include<cmath>
using namespace std;
const float P = 3.14;
float GetCircleInfo(){
    float diameter;
    cout<<"Enter diameter of the circle: ";
    cin>>diameter;
    return diameter;
}
float CalculateCircleArea(float diameter){
    float area = (P*pow(diameter,2))/4;
    return area;
}
void PrintCircleArea(float area){
    cout<<"The area of the circle is:  "<<area;
}
int main(){
 PrintCircleArea(CalculateCircleArea(GetCircleInfo()));
}