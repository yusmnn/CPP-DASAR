#include <iostream>
using namespace std;

int kuadrat( int i) {
    int j;
    j = i * i;
    return j;
}

int kali(int b, int c) {
    int a;
    a = b * c;
    return a;
}

int bagi(int y, int x) {
    int z;
    z = y / x;

    return z;
}
int tambah(int n, int m) {
    int o;
    o = n + m;
    return o;
}

int main () {
//pengkuadratan
    cout << "======================\n";
    int input, hasil;
    cout << "Masukkan angka : ";
    cin >> input;

    hasil = kuadrat(input);

    cout << "Hasil : " << hasil << endl;

//pengalian
    cout << "======================\n";
    int b, c, hasil1;
    cout << "Masukkan angka pertama : ";
    cin >> b;
    cout << "Masukkan angka kedua : ";
    cin >> c;
    
    hasil1 = kali(b,c);

    cout << "Hasil : " << hasil1 << endl;

//pembagian
    cout << "======================\n";
    int d, e, hasil2;
    cout << "Masukkan angka pertama : ";
    cin >> d;
    cout << "Masukkan angka kedua : ";
    cin >> e;

    hasil2 = bagi(d,e);

    cout << "Hasil : " << hasil2 << endl;

//kombinasi
    cout << "======================\n";
    int p, q, r, s, t, u, hasil3, hasil4;
    cout << "Angka pertama : ";
    cin >> p;
    cout << "Angka kedua : ";
    cin >> q;
    cout << "Angka ketiga : ";
    cin >> r;
    cout << "Angka keempat : ";
    cin >> s;

    t = kali(p,q);
    u = bagi(r,s);
    hasil4 = tambah(t,u);

    cout << "hasil " << p <<" x " << q << " + " << r << " : " << s << " = ";
    cout << hasil4;

    cout << "====PROGRAM SELESAI===\n";

    return 0;
}