#include<iostream>
using namespace std;
void swap(int &x,int &y,int temp){
  temp=x;
  x = y;
  y = temp;
  cout<<"a = "<<x<<" b = "<<y<<endl;

}
int main(){
int a=10,b=12,temp;
swap(a,b,temp);
cout<<a<<" "<<b;
 
}