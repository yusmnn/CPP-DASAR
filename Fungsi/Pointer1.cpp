#include <iostream>
using namespace std;

//pointer : penunjuk
// * reference : menyimpan alamat dari variable di memori
// & dereference : menampilkan/mengetahui alamat dari sebuah variable



int main(){

    int b;
    string a = "Yusman";
    string *ptr = &a;
    string c = *ptr;
    cout << " nilai a  : " << a << endl;
    cout << " alamat a : " << &a << endl;
    cout << " alamat b : " << &b << endl;
    cout << " pointer a : " << ptr << endl;
    cout << " nilai ptr: " << c;

    cin.get();
    return 0;
}

// int kuadrat(int i){

// }