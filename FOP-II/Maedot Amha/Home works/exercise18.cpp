#include<iostream>
using namespace std;
double price;
double discountamount;
int discountStatus;
double discount(double &price,double discountamount,int discountStatus);
int main(){
    discount(price,discountamount,discountStatus);
}
double discount(double &price,double discountamount,int discountStatus){
   cout<<"enter how much is the price: "<<endl;
   cin>>price;
   cout<<"Is the discount a fixed amount or calculated percentage?"<<endl;
   cout<<"1.fixed amount"<<endl<<"2.calculated with percentage"<<endl;
   cin>>discountStatus;
   switch(discountStatus){
      case 1:
        cout<<"how much is the fixed discount amount discounted: "<<endl;
        cin>>discountamount;
        if(discountamount>0){
           price=price-discountamount;
            if(price==0){
                return 0;
            }
            else{
               cout<<"selling price after discount is: "<<price;
            }
         }
        else{
          return 0;
        }
        break;
      case 2:
        cout<<"how much percentage is to be discounted: "<<endl;
        cin>>discountamount;
        if(discountamount<0){
           return 0;
        }
        else{
           double discountRate=(price*discountamount);
           price=price-discountRate;
           cout<<"selling price after discount is: "<<price;
        }
        return 0;
   }
   }