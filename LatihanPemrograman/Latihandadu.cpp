#include <iostream>
#include <cstdlib> //digunakan untuk memanggil fongsi random

using namespace std;

int main() {
    char lanjut;
    while (true) {
        cout << "Lempar dadu atau tidak : ";
        cin >> lanjut;

        if (lanjut == 'y') {
            cout << 1 + (rand() % 6) << endl;
        } 
        else if (lanjut == 'n') {
            cout << "Terima kasih";
            break;
        } 
        else {
            cout << "\n NOTE!  pilih y atau n \n " << endl;
        }
    }

    cin.get();
    return 0;
}