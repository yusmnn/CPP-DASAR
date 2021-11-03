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

//mengambil data
mahasiswa ambilData(int posisi, fstream &myFile){
    mahasiswa bufferData;
    myFile.seekp((posisi-1)*sizeof(mahasiswa)); // untuk membaca binery file di posisis tertentu
    myFile.read(reinterpret_cast<char*>(&bufferData),sizeof(mahasiswa));

    return bufferData;
}

// menulis data berurutan
void tulisData(mahasiswa &data, fstream &myFile){
    myFile.write(reinterpret_cast<char*>(&data),sizeof(mahasiswa));
}

void tulisDatabyPosition(int posisi, mahasiswa &bufferData, fstream &myFile){
    myFile.seekg((posisi)*sizeof(mahasiswa));
    myFile.write(reinterpret_cast<char*>(&bufferData),sizeof(mahasiswa));
}

int main(){

    fstream myFile;
    myFile.open("data.bin", ios::trunc | ios:: out | ios::in | ios::binary);

    mahasiswa mahasiswa1, mahasiswa2, mahasiswa3, output;

    mahasiswa1.NIM = 13020;
    mahasiswa1.nama = "Yusman";
    mahasiswa1.jurusan = "informatika";

    mahasiswa2.NIM = 13021;
    mahasiswa2.nama = "Yus";
    mahasiswa2.jurusan = "informatika";

    mahasiswa3.NIM = 13022;
    mahasiswa3.nama = "Man";
    mahasiswa3.jurusan = "informatika";

    tulisData(mahasiswa1,myFile);
    tulisData(mahasiswa2,myFile);
    tulisData(mahasiswa3,myFile);

    mahasiswa3.nama = "namsuY";
    tulisDatabyPosition(3, mahasiswa3, myFile);

    output = ambilData(3, myFile);  
    cout << output.NIM << endl;
    cout << output.nama << endl;
    cout << output.jurusan << endl;

    myFile.close();

    return 0;
}