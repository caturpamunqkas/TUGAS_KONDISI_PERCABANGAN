#include <iostream>

using namespace std;

int main() {
    // Input nomor punggung
    int nomorPunggung;
    cout << "Masukkan nomor punggung pemain: ";
    cin >> nomorPunggung;

    // Pengecekan posisi pemain berdasarkan nomor punggung
    if (nomorPunggung % 2 == 0) {
        if (nomorPunggung > 90) {
            cout << "Nomor punggung " << nomorPunggung << " digunakan untuk posisi Playmaker." << endl;
        } else if (nomorPunggung >= 50 && nomorPunggung <= 100) {
            cout << "Nomor punggung " << nomorPunggung << " digunakan untuk posisi Capten Team." << endl;
        } else {
            cout << "Nomor punggung " << nomorPunggung << " digunakan untuk posisi Target Attacker." << endl;
        }
    } else {
        if (nomorPunggung % 3 == 0 && nomorPunggung % 5 == 0) {
            cout << "Nomor punggung " << nomorPunggung << " digunakan untuk posisi Keeper." << endl;
        } else {
            cout << "Nomor punggung " << nomorPunggung << " digunakan untuk posisi Defender." << endl;
        }
    }

    return 0;
}
