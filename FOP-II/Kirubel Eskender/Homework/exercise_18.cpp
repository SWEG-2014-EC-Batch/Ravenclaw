#include <iostream>
#include <cassert>

using namespace std;

float discountPrice(double &price, double discount, bool isPercentage);

int main() {
    double price, discount;
    char fixedOrPercentage;
    bool isPercentage;
    mainLine:
    cout << "Discount calculator" << endl;
    cout << "Input the price: ";
    cin >> price;
    cout << "Input the discount amount: ";
    cin >> discount;
    cout << "is the discount a fixed amount or percentage(press F for fixed amount and P for percentage): ";
    cin >> fixedOrPercentage;
    if (fixedOrPercentage == 'F'){
        isPercentage = false;
    } else if (fixedOrPercentage == 'P'){
        isPercentage = true;
    } else {
        cout << "INVALID!";
        goto mainLine;
    }
    discountPrice(price, discount, isPercentage);
}

float discountPrice(double &price, double discount, bool isPercentage){
    double afterDiscount = 0;
    if (isPercentage == true) {
        afterDiscount = price * (discount/100);
    } else if (isPercentage == false) {
        afterDiscount = price - discount;
    }
    assert(discount >= 0);
    assert (afterDiscount != 0);
    cout << afterDiscount;
}
