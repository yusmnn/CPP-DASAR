#include <iostream>
using namespace std;

int a = 13;

int main(){
    //pointer : memanggil alamat dari variable
    int *mypointer = &a;

    cout << " nilai a : " << a << endl;
    cout << " alamat/pointer a : " << &a << endl;

    //deferencing : mengambil data dari suatu pointer
    cout << " mengambil data dari pointer mypointer : " << *mypointer << endl;
    cout << &mypointer;

    cin.get();
    return 0;
}