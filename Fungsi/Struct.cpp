#include <iostream>
#include <string>
using namespace std;

// struct: data yang dibentuk oleh beberapa data;
struct keluarga{
    string nama;
    int NIK;
    char jenis_kelamin;
    int usia;
};


int main(){

    keluarga pertama[7];

    pertama[0].nama = "Yuntu";
    pertama[0].NIK = 7315070;
    pertama[0].jenis_kelamin = 'L';
    pertama[0].usia = 40;

    pertama[1].nama = "Jurnia";
    pertama[1].NIK = 7315071;
    pertama[1].jenis_kelamin = 'P';
    pertama[1].usia = 36;

    cout << "data keluarga:\n";
    cout << "nama: " << pertama[0].nama << endl;
    cout << "NIK : " << pertama[0].NIK << endl;
    cout << "J.K : " << pertama[0].jenis_kelamin << endl;
    cout << "Usia: " << pertama[0].usia << endl;
    cout << endl;
    cout << "nama: " << pertama[1].nama << endl;
    cout << "NIK : " << pertama[1].NIK << endl;
    cout << "J.K : " << pertama[1].jenis_kelamin << endl;
    cout << "Usia: " << pertama[1].usia << endl;




    return 0;
}