// menghitung luas & keliling persegi panjang
#include <iostream>
using namespace std;

//fungsi kembalian
double luas(double p, double l) {
    double luas = p * l;
    return luas;
}

double keliling( double p, double l){
    double keliling = 2 * (p + l);
    return keliling;
}

//fungsi bukan kembalian
void tampilkan_luas(double p, double l) {
    cout << "Menampilkan dengan void\n";
    cout << "Luas persegi panjang : "<< luas(p, l) << endl;
}
void tampilkan_keliling(double p, double l) {
    cout << "Keliling persegi panjang : "<< keliling(p, l) << endl;
}

int main() {
    double p;
    double l; 
    cout << "=====PROGRAM MENGHITUNG LUAS & KELLING PERSEGI PANJANG=====\n";

    cout << "Panjang : ";
    cin >> p;
    cout << "Lebar : ";
    cin >> l;
    cout << endl;

    tampilkan_luas(p, l);
    tampilkan_keliling(p,l);
    cout << "\n=====PROGRAM SELESAI=====";

    cin.get();
    return 0;
}