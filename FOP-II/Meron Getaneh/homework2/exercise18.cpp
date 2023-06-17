#include<iostream>
#include<cassert>
using namespace std;
double calculate_discount(double price,double discount,bool ispercentage){
    double discount_amount,netprice;
    // discount calculated either in percentage or fixed amount
    if(ispercentage){
        discount_amount=price*(discount/100);
    }else{
        discount_amount=discount;
    }
    netprice=price-discount_amount;
    // checking discount is postive and price is not 0
    if(discount_amount<0|| netprice<=0){
        assert(false && "discount must be postive and price can't drop to 0");
    }
    return netprice;
}
int main(){
    double price,discount,netprice;
    bool ispercentage;
    //accept price and discount from user
    cout<<"enter the price\n";
    cin>>price;
    cout<<"enter the discount\n";
    cin>>discount;
    cout<<"is the discount in percentage?(1 for yes and 0 for no):";
    cin>>ispercentage;
    //price after discount
    netprice=calculate_discount(price,discount,ispercentage);
    cout<<"the price after discount is:"<<netprice<<endl;
    return 0;
}
