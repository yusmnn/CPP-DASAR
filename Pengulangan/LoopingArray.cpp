#include <iostream>
#include <array> //
using namespace std;

int main() {
    // looping untuk array di C++ 11 ke atas
    /*
        for(deklarasi variabel) : array{
            statement
        }
    */
    array <int, 5> ArrayNilai = {0,1,2,3,4};

    for(int nilai : ArrayNilai){
        cout << "addres " << &nilai << " nilainya " << nilai << endl;
        nilai = 1; // tidak akan merubah array
    }
    cout << endl;

//memanipulasi array dengan menggunakan referensi &
    for(int &nilairef : ArrayNilai){
        nilairef *= 10;
        //nilairef /= 2;       
    }
    cout << endl;

    for(int &nilairef : ArrayNilai){
        cout << "addres " << &nilairef << " nilainya " << nilairef << endl;
        
    }


    cin.get();
    return 0;
}