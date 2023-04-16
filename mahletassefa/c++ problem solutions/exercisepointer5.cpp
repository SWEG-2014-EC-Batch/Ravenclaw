#include <iostream>
using namespace std;
int main() {
    float mark[3][5] = {
            {10, 11, 12, 13, 14},
            {20, 21, 22, 23, 24},
            {30, 31, 32, 33, 34}
    };
    float *ptr = mark[0];
    ptr += 2;
    *ptr *= 2;
    ptr = *(mark + 1) + 3;
    *ptr += 7.0;
    ptr += 4;
    *ptr += 8.0;
    cout<<*ptr<<endl;

    return 0;
}