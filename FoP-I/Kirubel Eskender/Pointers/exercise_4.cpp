#include <iostream>

using namespace std;
int main() {
    int x = 10, y = 20;
    const int z = 10;

    int * p1 = &x;
    int *p1 = 20;
    p1 = &y;

    const int * p2 = zx;
    *p2 = 50;
    p2=&y;
    *p2 = 100;

    int * const p3 = &x;
    *p3 = 60;

    p3 =&y;

    const int * const
    p4 =&x;
    p4 =&y;
    *p4 = 90;
    // cannot assignt to a constant
    return 0;
}
