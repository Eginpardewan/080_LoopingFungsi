#include <iostream>
using namespace std;

int nTelor, nMie, nAir;
string nama;

void input()
{
    cout << "Masukan Nama = ";
    cin >> nama;
    cout << "Masukan Jumlah Telor = ";
    cin >> nTelor;
    cout << "Masukan Jumlah Mie = ";
    cin >> nMie;
    cout << "Masukan Jumlah Air = ";
    cin >> nAir;
}

int hitungHarga() {
    const int hTelur = 1000, hMie = 1500, hAir = 500;
    return (nTelor * hTelur) + (nMie * hMie) + (nAir * hAir);
}

void display(){
    cout << "Nama = " << nama << endl;
    cout << "Jumlah Telor = " << nTelor << endl;
    cout << "Jumlah Mie = " << nMie << endl;
    cout << "Jumlah Air = " << nAir << endl;
    cout << "Total Harga Rp." << hitungHarga() << endl;
}

int main() {
    input();
    display();
    return 0;
}