#include <iostream>

using namespace std;

// tipe data union adalah kumpulan data yang anggotanya di simpan di dalam memori yang sama dan saling mempengaruhi.
//maka saat nilai satu anggota diubah, nilai anggota union lain akan berubah walaupun tidak menjadi sama.
union namaunion{
        int int_value;
        char char_value[6]; 
    };

int main(){
    namaunion nama;
    nama.int_value = 24176666;

    cout << " data int_value : " << nama.int_value << endl;
    cout << " data char_value : " << nama.char_value << "   <- belum terisi" <<  endl;

    nama.char_value[0] = 'Y';
    nama.char_value[1] = 'u';
    nama.char_value[2] = 's';
    nama.char_value[3] = 'm';
    nama.char_value[4] = 'a';
    nama.char_value[5] = 'n';

    cout << " data int_value : " << nama.int_value << "   <- nilai berubah" << endl;
    cout << " data char_value : " << nama.char_value << endl;

    
    cin.get();
    return 0;
}