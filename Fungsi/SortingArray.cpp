#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

const size_t arraySize = 10;

//untuk angka
void printArray(array <int, arraySize> &angka){
    cout << "array: ";
    for(int &a : angka){
        cout << a << " ";
   }
    cout << "diurutkan menjadi : ";

}
void print_Array(array <int, arraySize> &angka){
    for(int &a : angka){
        cout << a << " ";
   }
}

// untuk huruf
void printArray(array <char, arraySize> &huruf){
    cout << "array: ";
    for(char &a : huruf){
        cout << a << " ";
   }
    cout << "diurutkan menjadi : ";
}
void print_Array(array <char, arraySize> &huruf){
    for(char &a : huruf){
        cout << a << " ";
   }
}


int main() {
    array <int, arraySize> angka = {3,5,8,6,9,1,0,4,7,2};
    array <char, arraySize> huruf = {'y','u','s','m','a','n','k','p','c','d'};

    printArray(angka);
    sort(angka.begin(), angka.end());
    print_Array(angka);
    cout << endl;

    printArray(huruf);
    sort(huruf.begin(), huruf.end());
    print_Array(huruf);
    cout << endl;

    cin.get();
    return 0;
}