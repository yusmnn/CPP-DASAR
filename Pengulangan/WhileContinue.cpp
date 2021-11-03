#include <iostream>
using namespace std;

int main() {
// continue berfungsi untuk ngeskip program di bawahnya
    
    int i = 1;

    cout << "===PROGRAM DIMULAI===\n";
    while (i <= 10) {
        i++; //increment di taro sebelum continue agar bisa berjalan jika menggunakan while
            if ( i == 8){
            continue;
            }
            if ( i >= 10){
                break;
            }
        cout << i << " Lebih kecil dari 10" << endl;
    }
    cout << "\n===PROGRAM SELESAI===";

cin.get();
return 0;
}