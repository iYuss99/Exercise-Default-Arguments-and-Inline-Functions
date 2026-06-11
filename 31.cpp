#include <iostream>
using namespace std;

//Func dgn def argument
void sapa (string nama = "Kamu") {
    cout << "Hai, " << nama << "!" << endl;
}

int main() {
    sapa (); //Def argument
    sapa("iYus"); //nilai yang diberi
    return 0;
}