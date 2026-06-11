#include <iostream>
using namespace std;

inline double hitungTotalHarga(double harga, int jumlah = 1, double diskon = 0.05) {
    return (harga * jumlah) - ((harga * jumlah) * diskon);
}

int main() {
    cout << "Total harga (1 item, default diskon): Rp." << hitungTotalHarga(100000) << endl;
    cout << "Total harga (3 item, default diskon): Rp." << hitungTotalHarga(100000, 3) << endl;
    cout << "Total harga (2 item,  diskon 10%): Rp." << hitungTotalHarga(100000, 2, 0.1) << endl;
    return 0;
}