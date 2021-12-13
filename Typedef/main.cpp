//https://youtu.be/kEVIZGsIA4I?t=15

#include <iostream>

using namespace std;

//typdef = memeberikan nama alias untuk tipe data

int main(){

    //alias untuk tipe data int
    typedef int i;

    //alias untuk tipe data array
    typedef int ivector2D[2];

    //untuk tipe data yang panjang
    typedef unsigned long NIM;
    typedef double long dlong[2];

    using phi = double long;

    i a = 10;
    ivector2D b = {6,8};
    NIM c = 202522222;
    dlong d = {11.11,3.14};
    phi e = 3.1415926535;

    cout << "Nilai a: " << a << endl;
    cout << "Nilai b: " << b[0] << " dan " << b[1] << endl;
    cout << "NIlai c: " << c << endl;
    cout << "Nilai d: " << d[0] << " dan " << d[1] << endl;
    cout << "Nilai e: " << e;


    return 0;
}