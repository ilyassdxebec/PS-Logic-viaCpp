#include<iostream>
using namespace std;
int GetNumber(){
    int N;
    cout<<"Enter a number: ";
    cin>>N;
    return N;
}
 enum enOddOrEven{Odd=1,Even=2};
 enOddOrEven CheckOddOrEven(int number){
    if(number%2==0){
        return enOddOrEven::Even;
    }
    else return enOddOrEven::Odd;
 }
void PrintRangeUsingForLoop(int N){
    cout<<"*******************\n";
    cout<<"Using a for loop: \n";
    int sum=0;
     for(int i=1;i<=N;i++){
        if(CheckOddOrEven(i)==enOddOrEven::Even){
            sum+=i;
        }
     }
     cout<<"\nSum is: "<<sum;
     cout<<"\n*******************\n";
}

void  PrintRangeUsingDoWhileLoop(int N){
    cout<<"*******************\n";
    cout<<"Using a Do While loop: \n";
    int sum=0;
      int counter = 0;
       do{
         counter++;
         if(CheckOddOrEven(counter)==enOddOrEven::Even){
            sum+=counter;
        }
       }while(counter<N);
       cout<<"\nSum is: "<<sum;
     cout<<"\n*******************\n";
}

void PrintRangeUsingWhileLoop(int N){
    cout<<"*******************\n";
    cout<<"Using a while loop: \n";
    int sum=0;
     int counter = 0;
     while(counter<N){
        counter++;
        if(CheckOddOrEven(counter)==enOddOrEven::Even){
            sum+=counter;
        }
     }
     cout<<"\nSum is: "<<sum;
     cout<<"\n*******************\n";
}

int main(){
   int N = GetNumber();
   PrintRangeUsingForLoop(N);
   PrintRangeUsingDoWhileLoop(N);
   PrintRangeUsingWhileLoop(N);
}