#include <iostream>
using namespace std;

int PangkatIterasi(int a, int b) {
    int hasil = a;
    for(int i = 1; i < b; i++) {
        hasil = hasil * a;
    }
    return hasil;
}

int PangkatRekursif(int a, int b){
    if(b <= 1){
        cout << "Akhir dari rekursif\n";
        return a;
    } else {
        cout << "rekursif\n";
        return PangkatRekursif(a, b-1);
    }
}

int main() {
    int a, b;
    cout << "Masukkan angka : ";
    cin >> a;
    cout << "Masukkan pangkat : ";
    cin >> b;
    cout << "Hasil iterasi : " << PangkatIterasi(a,b) << endl;
    cout << "Hasil rekursif : " << PangkatRekursif(a,b) << endl;

    cin.get();
    return 0;
}