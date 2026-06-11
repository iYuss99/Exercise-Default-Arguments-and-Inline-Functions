#include <iostream>
using namespace std;

// fungsi dengan default argument diskon 20%
double hitungTotal(double harga, int jumlahItem, double diskon = 0.2) {
    if (jumlahItem > 2) {
        return harga - (harga * diskon);
    }
    return harga;
}

int main() {
    // User A
    double totalA = hitungTotal(100000, 1);
    
    // User B (A + B + C)
    double totalB = hitungTotal(350000, 3);

    cout << "Total User A: Rp." << totalA << endl;
    cout << "Total User B: Rp." << totalB << endl;

    return 0;
}