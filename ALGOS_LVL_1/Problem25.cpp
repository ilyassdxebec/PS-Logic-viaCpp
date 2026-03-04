#include<iostream>
using namespace std;
int GetAge(){
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    return age;
}
bool ValidateAge(int age,int from,int to){
    return (age>=from && age<=to);
}
int LoopUntilAgeIsRight(int from,int to){
    int Age;
do{
  Age = GetAge();
  if(!ValidateAge(Age, from, to)){
            cout << "Invalid age. Must be between " << from << " and " << to << ".\n";
        }
}
while(!ValidateAge(Age,from,to));

return Age;

}

void PrintAge(int Age){
    cout<<"\n Your age is: "<<Age;
}
int main(){
   PrintAge(LoopUntilAgeIsRight(18,45));
}