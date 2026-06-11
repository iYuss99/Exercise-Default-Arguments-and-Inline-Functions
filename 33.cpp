#include <iostream>
using namespace std;

//func dgn return value dan def argument
double hitungDiskon(double harga, double diskon = 0.1) {
    return harga - (harga * diskon);
}

int main() {
    cout << "Harga setelah diskon default (10%): Rp." << hitungDiskon(100000) << endl;
    cout << "Harga setelah diskon (20%): Rp." << hitungDiskon(100000, 0.2) << endl;
    return 0;
}