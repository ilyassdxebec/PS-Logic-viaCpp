#include<iostream>
using namespace std;
void PrintTableHeader(){
    cout<<"\t\t\t***Multiplication Table From 1 to 0***\n\n";
    cout<<"\t";
    for(int i=1;i<=10;i++){
        cout<<i<<"\t";
    }
    cout<<"\n__________________________________________________________________________________\n";
}
string PrintColumnSeparator(int i){
    if(i<10) return "  |";
    else return " |";
}
void PrintTable(){
    PrintTableHeader();
    for(int i=1;i<=10;i++){
        cout<<i<<PrintColumnSeparator(i);
        for(int j=1;j<=10;j++){
          cout<<"\t"<<j*i;
        }
        cout<<"\n";
    } 
}
int main(){
PrintTable();
}