#include <iostream>
#include <string>

using namespace std;

// ternary operator hampir mirip dengan if else 
//tapi hanya bisa digunakan untuk dua hasil

int main(){
    int i, j;
    string output, hasil1, hasil2;

    hasil1 = " > 10";
    hasil2 = " < 10";

    i = 10;

    cout << "Masukkan angka: ";
    cin >> j;

    output = (j > i) ? hasil1 : hasil2; 
    cout << j << output << endl;



    cin.get();
    return 0;
}