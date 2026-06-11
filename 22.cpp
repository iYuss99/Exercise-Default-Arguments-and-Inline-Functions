#include <iostream>
using namespace std;

inline int multiply (int a, int b) {
    return a * b;
}

int main () {
    cout <<"6 * 4 = " << multiply(6, 4) << endl;
    cout <<"5 * 3 = " << multiply(5, 3) << endl;
    return 0;
}