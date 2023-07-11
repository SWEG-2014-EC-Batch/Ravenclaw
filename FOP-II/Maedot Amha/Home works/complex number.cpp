#include<iostream>
using namespace std;
struct ComplexNumber {
    double real;
    double imaginary;
};
ComplexNumber add(ComplexNumber num1, ComplexNumber num2) {
    ComplexNumber result;

    result.real = num1.real + num2.real;
    result.imaginary = num1.imaginary + num2.imaginary;
    return result;
}
ComplexNumber subtract(ComplexNumber num1, ComplexNumber num2) {
    ComplexNumber result;

    result.real = num1.real - num2.real;
    result.imaginary = num1.imaginary - num2.imaginary;
    return result;
}

ComplexNumber multiply(ComplexNumber num1, ComplexNumber num2) {
    ComplexNumber result;

    result.real = num1.real * num2.real- (num1.imaginary * num2.imaginary);;
    result.imaginary =num1.real * num2.imaginary+ (num1.imaginary * num2.real);
    return result;
}    
ComplexNumber divide(ComplexNumber num1, ComplexNumber num2){
    ComplexNumber result;

    double denominator = (num2.real * num2.real) + (num2.imaginary * num2.imaginary);

    result.real = ((num1.real * num2.real) + (num1.imaginary * num2.imaginary)) / denominator;
    result.imaginary = ((num1.imaginary * num2.real) - (num1.real * num2.imaginary)) / denominator;
    return result;
}
int main(){
    ComplexNumber num1, num2, result;
    cout<< "Enter the real and imaginary parts of the first complex number: ";
    cin>>num1.real >> num1.imaginary;
    cout << "Enter the real and imaginary parts of the second complex number: ";
    cin>>num2.real>>num2.imaginary;
    result=add(num1,num2);
    cout << "sum: " << result.real << " + " << result.imaginary << "i" << endl;
    result=subtract(num1,num2);
    cout << "Subtraction: " << result.real << " + " << result.imaginary << "i" << endl;
    result=multiply(num1,num2);
    cout << "product: " << result.real << " + " << result.imaginary << "i" << endl;
    result=divide(num1,num2);
    cout << "quotient: " << result.real << " + " << result.imaginary << "i" << endl;
 }

