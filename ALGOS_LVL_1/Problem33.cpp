#include<iostream>
using namespace std;
int TakeGrade(){
    int grade;
    do{
        cout<<"Please enter your grade: ";
        cin>>grade;
    }while(grade>100 || grade<0);
    return grade;
}
 void PrintGrade(int grade){
     if(grade>=90){
        cout<<"A";
     }
      else if(grade>=80){
        cout<<"B";
     }
     else if(grade>=70){
        cout<<"C";
     }
      else if(grade>=60){
        cout<<"D";
     }
      else if(grade>=50){
        cout<<"E";
     }
      else{
        cout<<"F";
     }
 }
int main(){
     PrintGrade(TakeGrade());
}