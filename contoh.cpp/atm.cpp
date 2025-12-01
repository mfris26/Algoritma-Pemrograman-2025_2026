#include <iostream>
#include <string>
using namespace std;

string saldoRupiah(long long saldo) {
    string result = "Rp ";
    string saldoStr = to_string(saldo);
    int len = saldoStr.length();
    int count = 0;

    for (int i = len - 1; i >= 0; i--) {
        result = saldoStr[i] + result;
        count++;
        if (count == 3 && i != 0) {
            result = "." + result;
            count = 0;
        }
    }
    return result;
}

int main() {
    string nama;
    bool valid = false;

    //1. Input nama dengan validasi
    do {
        cout << "Masukkan nama Anda: ";
        getline(cin, nama);
        if (nama.length() >= 3) {
            valid = true;
        } else {
            cout << "Nama harus terdiri dari minimal 3 karakter. Silakan coba lagi." << endl;
        }
    } while (!valid);

    //2. Input Nim
    long long nim;
    cout << "Masukkan NIM Anda: ";
    cin >> nim;

    //3. Nim sebagai saldo
    long long saldo = nim;

    //4. Tampilkan saldo 
    cout << "Halo, " << nama << "!" << endl;
    cout << "Saldo awal Anda adalah: " << saldoRupiah(saldo) << endl;
    saldoRupiah(saldo)<<"\n\n";

    int menu;
    do {
        cout << "Menu ATM:" << endl;
        cout << "1. Cek Saldo" << endl;
        cout << "2. Setor Uang" << endl;
        cout << "3. Tarik Uang" << endl;
        cout << "4. Keluar" << endl;
        cout << "Pilih menu (1-4): ";
        cin >> menu;

        switch (menu) {
            case 1:
                cout << "Saldo Anda saat ini: " << saldoRupiah(saldo) << endl;
                break;

            case 2: {
                long long setor;
                cout << "Masukkan jumlah uang yang akan disetor: ";
                cin >> setor;
                if (setor > 0) {
                    saldo += setor;
                    cout << "Setoran berhasil! Saldo baru Anda: " << saldoRupiah(saldo) << endl;
                } else {
                    cout << "Jumlah setoran harus positif." << endl;
                }
                break;
            }

            case 3: {
                long long tarik;
                cout << "Masukkan jumlah uang yang akan ditarik: ";
                cin >> tarik;
                if (tarik > 0 && tarik <= saldo) {
                    saldo -= tarik;
                    cout << "Penarikan berhasil! Saldo baru Anda: " << saldoRupiah(saldo) << endl;
                } else if (tarik > saldo) {
                    cout << "Saldo tidak mencukupi." << endl;
                } else {
                    cout << "Jumlah penarikan harus positif." << endl;
                }
                break;
            }

            case 4:
                cout << "Terima kasih telah menggunakan ATM kami. Sampai jumpa!" << endl;
                break;

            default:
                cout << "Menu tidak valid. Silakan pilih antara 1-4." << endl;
        }
    } while (menu != 4);

    return 0;

}
