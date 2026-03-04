#include<iostream>
#include<limits>
using namespace std;

struct stStudents
{
 string Name;
 int age;
 float grade; 
};

 int ReadNumberOnly(string message)
{
    int Number;
    cout<< message;
    cin>>Number;
    cout<<endl;
    
    while(cin.fail())
   {
     cin.clear();
     cin.ignore(numeric_limits<streamsize>::max(),'\n');
     cout<<"Invalid Number, Enter a valid one: ";
     cin>>Number;
   }    
    return Number;
}

void FillStudentsInfo(stStudents *ptr, int NumOfStudents)
{
  for(int i=0;i<NumOfStudents;i++)
  {
     cout<<"Enter Student "<<i+1<<" Name : ";
     cin >> (ptr+i)->Name;
     cout<<endl;

      cout<<"Enter Student "<<i+1<<" age : ";
     cin >> (ptr+i)->age;
     cout<<endl;

      cout<<"Enter Student "<<i+1<<" grade : ";
     cin >> (ptr+i)->grade;
     cout<<endl;
  }
}

void PrintAllStudentsInfo(stStudents *ptr,int NumOfStudents)
{
    for(int i=0;i<NumOfStudents;i++)
  {
     cout<<"Student "<<i+1<<" Name is : ";
     cout<< (ptr+i)->Name;
     cout<<endl;

      cout<<"Student "<<i+1<<" age is : ";
     cout<< (ptr+i)->age;
     cout<<endl;

      cout<<"Student "<<i+1<<" grade is : ";
     cout<< (ptr+i)->grade;
     cout<<endl<<endl;
  }
}

stStudents StudentWithHighestGrade(stStudents *ptr,int NumOfStudents)
{
     stStudents SmartStudent = *ptr;
     float HighestGrade = (ptr)->grade;

     for(int i=1;i<NumOfStudents;i++)
  {
     if(HighestGrade < (ptr+i)->grade)
     {
      HighestGrade = (ptr+i)->grade;
      SmartStudent = *(ptr+i);
     }
  }
  return SmartStudent ;
}

int main()
{
  int NumOfStudents = ReadNumberOnly("Enter Number of Students : ");
  cout<<endl;

  stStudents *ptr = new stStudents[NumOfStudents];

  cout<<"______Filling Students Inofs______\n\n";

  FillStudentsInfo(ptr,NumOfStudents);

  cout<<"______Printing Students Inofs______\n\n";

  PrintAllStudentsInfo(ptr,NumOfStudents);

  stStudents SmartestStudent = StudentWithHighestGrade(ptr,NumOfStudents);

  cout<<"The Smartest Student is "<<SmartestStudent.Name;

  delete[] ptr;
  ptr = nullptr;

}