#include <iostream>
#include <string>


using namespace std;

int main() {
    int i, j;
    string hasil1, hasil2, hasil3, output;
    char ulang;
    hasil1 = " > 6";
    hasil2 = " < 6";
    hasil3 = " = 6";
    i = 6;

   do {
    cout << "masukkan angka: ";
    cin >> j;

        if(j > i){
            cout << j << hasil1;
        }
        else if(j < i){
            cout << j << hasil2;
        }
        else {
            cout << j << hasil3;
        }
        cout << endl;
        cout << " lanjut Y/N.. ";
        cin >> ulang;
   }
   while(ulang =='Y' or ulang == 'y');
   cout << "program selesai"<< endl;

    cin.get();
    return 0;
}