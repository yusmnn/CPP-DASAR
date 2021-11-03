#include <iostream>

using namespace std;

enum benda {
    pensil,
    mouse = 4, 
    galon,
    gelas,
};

int main(){
    int barang;
    benda alat_belajar;
    alat_belajar = pensil;

    cout << alat_belajar << endl;
    if(alat_belajar == pensil){
        cout << " adalah kode alat belajar" << endl;
    }

    cin.get();
    return 0;
}