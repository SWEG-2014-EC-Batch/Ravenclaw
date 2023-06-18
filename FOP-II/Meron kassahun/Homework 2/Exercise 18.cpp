//Q18

#include <iostream>

#include <cassert>

using namespace std;

double calculate_discount(double price, double discount, bool is_percentage) {

    double discount_amount;

    if (is_percentage) {

        discount_amount = price * (discount / 100);

    } else {

        discount_amount = discount;

    }

    if (discount_amount < 0 || price - discount_amount <= 0) {

        assert(false && "Discount cannot be negative or make the price zero");

    }

    return price - discount_amount;

}

int main() {

    double price;

    double discount;

    bool is_percentage;

    cout << "Enter the price: ";

    cin >> price;

    cout << "Enter the discount: ";

    cin >> discount;

    cout << "Is the discount a percentage? (1 for yes, 0 for no): ";

    cin >> is_percentage;

    double discounted_price = calculate_discount(price, discount, is_percentage);

    cout << "Discounted price: " << discounted_price << endl;

    return 0;

}
