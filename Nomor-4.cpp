#include <iostream>

using namespace std;

int main() {
    // Input umur dan tinggi anak
    int umur;
    double tinggi;
    
    cout << "Masukkan umur anak: ";
    cin >> umur;

    if (umur < 1) {
        cout << "Dilarang masuk." << endl;
    } else {
        cout << "Masukkan tinggi anak (cm): ";
        cin >> tinggi;

        // Penentuan tarif harga berdasarkan umur dan tinggi anak
        if (umur < 3) {
            int tarif = 30000;
            if (umur == 2 && tinggi > 70) {
                tarif += 10000;
            }
            cout << "Tarif harga: Rp " << tarif << endl;
        } else if (umur < 7) {
            int tarif = 40000;
            if (umur >= 4 && umur <= 7 && tinggi > 120) {
                tarif += 15000;
            }
            cout << "Tarif harga: Rp " << tarif << endl;
        } else if (umur < 10) {
            int tarif = 50000;
            if (umur >= 8 && umur <= 10 && tinggi > 150) {
                tarif += 20000;
            }
            cout << "Tarif harga: Rp " << tarif << endl;
        } else {
            cout << "Tarif harga: Rp 80000" << endl;
        }
    }

    return 0;
}
