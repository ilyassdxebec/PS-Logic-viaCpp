 #include<iostream>
 using namespace std;

 int GetBase(){
    int base;
    cout<<"Please Enter base: ";
    cin>>base;
    return base;
 }
 int GetPower(){
     int power;
  cout<<"\nPlease Enter power: ";
    cin>>power;
    return power;
 }
  void PowerOfM(int power,int base){
     int result;
     if(power==0){
         result =1;
     }else{
      result=1;
     for(int i=1;i<=power;i++){
        result*=base;
     }
     }
   
    cout<<base<<" to power of "<<power<<" is "<<result;
  }

 int main(){
   PowerOfM(GetPower(),GetBase());
 }
