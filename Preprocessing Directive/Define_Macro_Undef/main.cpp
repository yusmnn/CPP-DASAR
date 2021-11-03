//https://youtu.be/Fkg8VaiYgjU

#include <iostream>

// gunakan huruf kapital agar bisa membedakan mana yang diolah oleh preprocessor[micro] dan mana yang diolah oleh compiler

//macro merubah nilai dengan nama
#define PHI 3.14
#define BAHASA "Indonesia"

//macro untuk fungsi
#define KUADRAT(X) (X*X)
#define MAX(I,J) ((I > J) ? I : J) //fungsi ternary operator

using namespace std;

int main(){

    cout << "luas lingkaran dengan jari-jari 8cm :" << PHI * KUADRAT(8) << endl; // mencari luas lingkaran
    cout << BAHASA << endl;
    cout << MAX(1,9) << endl;

//pendeklarasian macro bisa dimana saja
#undef BAHASA   // mendefinisikan ulang macro
#define BAHASA "Nihong"

    cout << BAHASA << endl;

    

    return 0;
}