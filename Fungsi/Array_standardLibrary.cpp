#include <iostream>
#include <array>
using namespace std;
int main(){

    // membuat array dengan standard library

    std::array <int, 3> nilai; // array < tipe, jumlah_array > nama_array

    for(int i = 0; i <=2; i++){
        nilai[i] = i;
        std::cout << "Nilai [" << i << "] = " << nilai[i] << " addres : " << &nilai[i] << std::endl;
    }

    cout << endl;
    
    //salah-satu contoh function di standard library <array>
    cout << "Ukuran array : " << nilai.size() << endl;
    cout << "nilai ke-3   : " << nilai.at(2) << endl;
    cout << "Addres awal  : " << nilai.begin() << endl;
    cout << "Addres akhir : " << nilai.end() << endl;

    cin.get();
    return 0;
}