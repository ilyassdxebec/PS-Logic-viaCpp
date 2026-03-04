    #include<iostream>
    using namespace std;
    float GetTotalSalesAmount(){
        float TSA;
        cout<<"Enter the total sales amount: ";
        cin>>TSA;
        return TSA;
    }
    float CalculateComissionPercentage(float TSA){
  if(TSA>1000000){
       return 0.01;
        }
        else if(TSA<1000000&&TSA>500000){
        return 0.02;
        }
        else if(TSA>100000&&TSA<500000){
        return 0.03;
        }
        else if(TSA>50000){
        return 0.05;
        }
        else return 0;
    }

    float CalculateCommission(float TSA){
        return TSA*CalculateComissionPercentage(TSA);
    }

    void PrintCommission(float TSA){
        cout<<"\nCommission of "<<TSA<<" is "<<CalculateCommission(TSA);
    }


    int main(){
    PrintCommission(GetTotalSalesAmount());
    }