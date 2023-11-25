#include <iostream>
#include <string>

using namespace std;

// Fungsi untuk menganalisis ciri-ciri mafia
pair<bool, string> analisisMafia(string nama, int umur, string tempatTinggal, double tabungan) {
    if (tabungan > 10000000) {
        if (umur > 40 && (tempatTinggal == "Nevada" || tempatTinggal == "New York" || tempatTinggal == "Havana")) {
            return make_pair(true, "Don");
        }
    } else if (1000000 <= tabungan && tabungan <= 2000000) {
        if (umur >= 25 && umur <= 40 && (tempatTinggal == "New Jersey" || tempatTinggal == "Manhattan" || tempatTinggal == "Nevada")) {
            return make_pair(true, "Underboss");
        }
    } else if (tabungan < 1000000) {
        if (umur >= 18 && umur <= 24 && (tempatTinggal == "California" || tempatTinggal == "Detroit" || tempatTinggal == "Boston")) {
            return make_pair(true, "Capo");
        }
    }
    
    return make_pair(false, "");
}

int main() {
    // Input dari pengguna
    string nama, tempatTinggal;
    int umur;
    double tabungan;

    cout << "Masukkan nama: ";
    getline(cin, nama);

    cout << "Masukkan umur: ";
    cin >> umur;

    cout << "Masukkan tempat tinggal: ";
    cin.ignore(); // Membersihkan buffer sebelum membaca string
    getline(cin, tempatTinggal);

    cout << "Masukkan tabungan dalam dollar: ";
    cin >> tabungan;

    // Analisis ciri-ciri untuk menentukan pangkat
    auto hasilAnalisis = analisisMafia(nama, umur, tempatTinggal, tabungan);

    // Output
    if (hasilAnalisis.first) {
        cout << nama << " kemungkinan adalah seorang anggota mafia dengan pangkat " << hasilAnalisis.second << "." << endl;
    } else {
        cout << nama << " tidak mencurigakan." << endl;
    }

    return 0;
}