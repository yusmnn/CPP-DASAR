#include <iostream>
#include <string>

using namespace std;

struct DataSiswa {
    string NIM;
    string NamaLengkap;
};

struct DataNilai{
    float Nilai_Tugas[4];
    float Nilai_Mid;
    float Nilai_UAS;
    float Nilai_rata_rata_Tugas;
    float Nilai_Akhir;
    DataSiswa Siswa;
};

int main(){
    int i, j;
    string namasiswa;
    cout << "PROGRAM UNTUK MENGHUTUNG NILAI IPS MAHASISWA\n";
    cout << "nama mahasiswa : " << namasiswa << endl;



    return 0;
}
