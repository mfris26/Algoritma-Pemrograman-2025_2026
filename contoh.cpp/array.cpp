#include <iostream>
#include <string>
using namespace std;

int main() {
    string nim;
    cout << "Masukkan NIM: ";
    cin >> nim;

    int length = nim.length();
    int digit[length];

    // Ubah string menjadi array digit
    for (int i = 0; i < length; i++) {
        digit[i] = nim[i] - '0';   // convert char ke integer
    }

    // Total
    int total = 0;
    for (int i = 0; i < length; i++) {
        total += digit[i];
    }

    // Maksimum
    int mak = digit[0];
    for (int i = 0; i < length; i++) {
        if (digit[i] > mak) {
            mak = digit[i];
        }
    }

    // Minimum
    int minim = digit[0];
    for (int i = 0; i < length; i++) {
        if (digit[i] < minim) {
            minim = digit[i];
        }
    }

    // Rata-rata
    double rata = (double) total / length;

    // Reverse array
    int rev[length];
    for (int i = length - 1, j = 0; i >= 0; i--, j++) {
        rev[j] = digit[i];
    }

    // Output
    cout << "Digit        : [";
    for (int i = 0; i < length; i++) {
        cout << digit[i];
        if (i < length - 1) cout << ", ";
    }
    cout << "]" << endl;

    cout << "Total        = " << total << endl;
    cout << "Maksimum     = " << mak << endl;
    cout << "Minimum      = " << minim << endl;
    cout << "Rata-rata    = " << rata << endl;

    cout << "Reverse array: [";
    for (int i = 0; i < length; i++) {
        cout << rev[i];
        if (i < length - 1) cout << ", ";
    }
    cout << "]" << endl;

    return 0;
}