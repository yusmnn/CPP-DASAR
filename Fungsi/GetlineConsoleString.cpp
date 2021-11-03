#include <iostream>
#include <string>

using namespace std;

int main(){

    string kalimat_input;
    cout << " masukkkan kalimat :";

    //getline(cin, variable)
    getline(cin, kalimat_input);

    cout << "input anda :" << kalimat_input << endl;
    
    //jumlah kata dari inout
    int posisi = 0;
    int jumlah = 0;

    while(true){
        posisi = kalimat_input.find(" ", posisi + 1);
        jumlah++;
        cout << "posisi: " << posisi << " jumlah: " << jumlah << endl;
        if(posisi < 0){
            break;
        }

    }


    return 0;
}