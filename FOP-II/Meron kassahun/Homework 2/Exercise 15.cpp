// Q15

#include <iostream>

#include <cassert>

void scale(double factor, double& val1, double& val2) {

    assert(factor != 0); // check precondition

    

    std::cout << "Before scaling: " << val1 << " " << val2 << std::endl;

    

    val1 *= factor;

    val2 *= factor;

    

    std::cout << "After scaling: " << val1 << " " << val2 << std::endl;

}

int main() {

    double val1 = 3.5;

    double val2 = 7.2;

    

    scale(2.0, val1, val2);

    scale(0.5, val1, val2);

    

    return 0;

}
