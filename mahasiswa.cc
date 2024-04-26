#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    string prodi;
    string alamat;
    string tanggalLahir;
    vector<double> nilaiUTS;
    vector<double> nilaiUAS;

    void cetakData() {
        cout << "Nama: " << nama << endl;
        cout << "NIM: " << nim << endl;
        cout << "Prodi: " << prodi << endl;
        cout << "Alamat: " << alamat << endl;
        cout << "Tanggal Lahir: " << tanggalLahir << endl;
        cout << "Nilai UTS: ";
        for (double nilai : nilaiUTS) {
            cout << nilai << " ";
        }
        cout << endl;
        cout << "Nilai UAS: ";
        for (double nilai : nilaiUAS) {
            cout << nilai << " ";
        }
        cout << endl;
    }
};

int main() {
    Mahasiswa mhs;
    cout << "Masukkan nama: ";
    getline(cin, mhs.nama);
    cout << "Masukkan NIM: ";
    getline(cin, mhs.nim);
    cout << "Masukkan prodi: ";
    getline(cin, mhs.prodi);
    cout << "Masukkan alamat: ";
    getline(cin, mhs.alamat);
    cout << "Masukkan tanggal lahir: ";
    getline(cin, mhs.tanggalLahir);

    int jumlahUTS;
    cout << "Masukkan jumlah nilai UTS: ";
    cin >> jumlahUTS;
    mhs.nilaiUTS.resize(jumlahUTS);
    for (int i = 0; i < jumlahUTS; i++) {
        cout << "Nilai UTS ke-" << (i + 1) << ": ";
        cin >> mhs.nilaiUTS[i];
    }

    int jumlahUAS;
    cout << "Masukkan jumlah nilai UAS: ";
    cin >> jumlahUAS;
    mhs.nilaiUAS.resize(jumlahUAS);
    for (int i = 0; i < jumlahUAS; i++) {
        cout << "Nilai UAS ke-" << (i + 1) << ": ";
        cin >> mhs.nilaiUAS[i];
    }

    mhs.cetakData();

    return 0;
}
