#include <iostream>
using namespace std;

//variabel global
int angka;
int pilihan;

//Function untuk menampilkan menu
void tampilkanMenu() {
    cout << "\n====================================\n";
    cout << "       MENU CEK BILANGAN\n";
    cout << "===================================\n";
    cout << "1. Cek Bilangan Prima\n";
    cout << "2. Cek Bilangan Fibonacci\n";
    cout << "0. Keluar\n";
    cout << "Masukkan pilihan: ";
}

//Prosedur untuk input angka
void inputAngka() {
    cout << "Masukkan bilangan: ";
    cin >> angka;
}

//Function bool untuk mengecek bilangan prima
bool cekPrima(int n) {
    if (n <= 1) {
        return false;
    }

    int i = 2;
    while (i < n) {
        if (n % i == 0) {
            return false;
        }
        i++;
    }

    return true;
}

//Function bool untuk mengecek bilangan Fibonacci
bool cekFibonacci(int n) {
    if (n < 0) {
        return false;
    }

    int a = 0, b = 1, c;

    while (a <= n) {
        if (a == n) {
            return true;
        }
    }
}