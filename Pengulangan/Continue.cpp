#include <iostream>
using namespace std;

int main() {
// continue berfungsi untuk neskip program di bawahnya
    for(int y = 1; y <= 10; y++){
        if ( y == 10){
            continue;
        }
        cout << y << " Lebih kecil dari 10" << endl;
    }
    cout << "\n===PROGRAM SELESAI===";

cin.get();
return 0;
}