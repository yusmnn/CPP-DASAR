#include <iostream>

using namespace std;

//Konversi tipe adalah konversi antar tipe, bisa dari int ke double, atau double ke int, atau tipe lainnya.
//Casting lebih dari konversi jenis, tetapi juga konversi ekspresi.

int main(){
    int a = 5;
    float b = 0.5f;
    char c = 'a';
    int hasil;

    cout << (int)(c + a) << endl; //casting operator dari char ke int
    cout << (int)c << endl;

    cout << b + a << endl;  //hasil output float
    cout << (int)(b + a) << endl; //casting operator dari float ke int

    hasil =  a + b; // tetap int karena "hasil" di deklarasikan int 
    cout << hasil << endl;

    cout << (float)(c * b) << endl;
    cout << (float)c << endl;


    cin.get();
    return 0;
}