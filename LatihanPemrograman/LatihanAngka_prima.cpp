#include <iostream>

using namespace std;

int main(){
    int input;

    cout << "masukkan angka: ";
    cin >> input;


    if(input % 2 == 0){
        cout << "Angka " << input << " adalah angka genap" << endl;
    }
    else{
        cout << "angka " << input << " adalah angka ganjil" << endl;
    }

    cin.get();
    return 0;
}