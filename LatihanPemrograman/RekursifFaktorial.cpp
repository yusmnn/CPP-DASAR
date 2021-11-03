#include <iostream>
using namespace std;

int faktorial(int n);


int main(){
    int angka, hasil;
    cout << "masukkan angka : ";
    cin >> angka;
    hasil = faktorial(angka);
    cout << "\nhasil : " << hasil;

    cin.get();
    return 0;
}

int faktorial( int n){
    if(n <= 1){ //faktorial
        cout << n;
        return n;
    } else { //rekursif
        cout << n << " * ";
        return n * faktorial(n - 1);
    }
}