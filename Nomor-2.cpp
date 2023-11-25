#include <iostream>
#include <string>

using namespace std;

int main() {
    // Input nilai coding
    int nilaiCoding;
    cout << "Masukkan nilai coding: ";
    cin >> nilaiCoding;

    // Input nilai interview
    char nilaiInterview;
    cout << "Masukkan nilai interview (A/B): ";
    cin >> nilaiInterview;

    // Penilaian tes coding
    string hasilCoding;
    if (nilaiCoding > 80) {
        hasilCoding = "LOLOS";
    } else if (nilaiCoding >= 60) {
        hasilCoding = "DIPERTIMBANGKAN";
    } else {
        hasilCoding = "GAGAL";
    }

    // Penilaian tes interview
    string hasilInterview;
    if (nilaiInterview == 'A' || nilaiInterview == 'B') {
        hasilInterview = "LOLOS";
    } else {
        hasilInterview = "GAGAL";
    }

    // Menentukan apakah calon programmer berhasil atau tidak
    if ((hasilCoding == "LOLOS" || hasilCoding == "DIPERTIMBANGKAN") && hasilInterview == "LOLOS") {
        cout << "Selamat Kamu Berhasil Menjadi Calon Programmer" << endl;
    } else {
        cout << "Maaf Kamu Belum Berhasil Menjadi Calon Programmer" << endl;
    }

    return 0;
}
