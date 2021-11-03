#include<iostream>
using namespace std;

/*penggunaan prototype : memungkinkan untuk menjabarkan fungsi dimana saja
// tetapi harus di deklarasikan di awal
biasa digunakan untuk multi file*/
//prototype :
double luas(double x, double y);
void tampilkan(double z);
//
int main() {
    double p, q, hasil;
    cout << "Panjang : ";
    cin >> p;
    cout << "Lebar : ";
    cin >> q;

    hasil = luas(p, q);
    tampilkan(hasil);


    cin.get();
    return 0;
}

// cara simple untuk fungsi dengan kembalian
double luas(double x, double y) {
    return x * y;
}
void tampilkan(double z) {
cout << "Hasilnya adalah : " << z;
}
