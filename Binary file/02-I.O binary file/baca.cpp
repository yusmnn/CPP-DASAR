//https://youtu.be/4hjsFsVmAA8

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct mahasiswa{
    int NIM;
    string nama;
    string jurusan;
};

    //cout << sizeof(mahasiswa) << endl;
    //  |----72----|-----72----|----72----|
//mengambil data
mahasiswa ambilData(int &posisi, fstream &myFile){
    mahasiswa bufferData;
    myFile.seekp((posisi-1)*sizeof(mahasiswa)); // untuk membaca binery file di posisis tertentu

    myFile.read(reinterpret_cast<char*>(&bufferData),sizeof(mahasiswa));

    return bufferData;
}

int main(){
    fstream myFile;
    mahasiswa dataBaca;
    myFile.open("data.bin", ios::in | ios::binary);

    int posisi = 3;
    dataBaca = ambilData(posisi, myFile);

    cout << dataBaca.NIM << endl;
    cout << dataBaca.nama << endl;
    cout << dataBaca.jurusan << endl;

    
   
    myFile.close();
    return 0;
}