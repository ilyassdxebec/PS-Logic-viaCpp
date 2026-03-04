#include<iostream>
using namespace std;

int main()
{
    float *ptr;
    int StudentsNum;

    cout<<"How many students grades you want to add ? ";
    cin>>StudentsNum;
    cout<<endl;

    ptr = new float[StudentsNum];
    
    for(int i=0;i<StudentsNum;i++)
    {
       cout<<"Enter student "<<i+1<<" grade : ";
       cin>> *(ptr+i);
       cout<<endl;
    }

    cout<<"Student Grades Are : \n";

     for(int i=0;i<StudentsNum;i++)
    {
       cout<<"Student "<<i+1<<" grade is : ";
       cout<< *(ptr+i)<<endl;
    }

    delete[] ptr;
    ptr = nullptr;
}