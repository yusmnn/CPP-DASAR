#include <iostream>
#include <algorithm>
#include <array>

using namespace std;

const size_t arraySize = 10;

void printArray(array <int, arraySize> &angka){
    cout << "array: ";
    for(int &a : angka){
        cout << a << " ";
   }
    cout << endl;
}

int main(){
    array <int, arraySize> angka = {3,13,15,1,7,5,9,34,17,0};
    printArray(angka);

    int angkacari;
    bool ketemu;

    cout << "mencari angka dalam array diatas :";
    cin >> angkacari;

    sort(angka.begin(), angka.end()); //sort terlebih dahulu


    ketemu = binary_search(angka.begin(), angka.end(), angkacari); //search -> binary_search

    if(ketemu){
        cout << "\tketemu" << endl;
    } else {
            cout << "\t Tidak ketemu" << endl;
    }

    cin.get();
    return 0;
}