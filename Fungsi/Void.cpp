// belum selesai
#include <iostream>
using namespace std;

//reporter -> melaporkan kembali suatu nilai 
int aritmatika(int a, int b, int c) {
    int d;
    d = (a * b) / c;
    return d;
}
//worker -> menjalankan saja tanpa feedback
void nilai1(int e) {
    cout << " Masukkan nilai e : ";
    cin >> e;
}
//
void nilai2(int f) {
    cout << " Masukkan nilai f : ";
    cin >> f;
}
//
void nilai3(int g) {
    cout << " Masukkan nilai g : ";
    cin >> g;
}
//
void tampilkan( int n) {
    cout << "Hasil " << n << endl;
}

int main() {
    int e, f, g, output;
    nilai1(e);
    nilai2(f);
    nilai3(g);

    output = aritmatika(e, f, g);
    tampilkan(output);

    return 0;
}