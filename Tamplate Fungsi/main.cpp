#include <iostream>

using namespace std;

//Template fungsi adalah satu fungsi yang bisa berlaku untuk semua tipe data


// void salin(int data){
//     cout << data << endl;
// }

//contoh 1
template<typename T>
void salin(T data){
    cout << data << endl;
}

//contoh 2
template<typename T>
int toInt(T data){
    return int(data);
}

//contoh 3
template<typename T, typename U>
T max(T angka1,U angka2){
    return (angka1 > angka2) ? angka1 : angka2;
}

int main(){

    //ubah kesemua tipe data yang sama
    salin(3);
    salin(3.14);
    salin('T');
    salin("tiga");

    //ubah semua tipe data ke satu tipe data
    // disini merubah semua ke int
    cout << toInt(8.10) << endl;
    
    //fungsi max di tamplate
    cout << max(6,90) << endl;

    //menjabarkan output tamplatenya tipe datanya apa
    salin<int>(11.11);
    cout << max<double,double>(0.5,0.10);


    return 0;
}