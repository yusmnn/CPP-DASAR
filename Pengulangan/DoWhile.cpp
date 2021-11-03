#include <iostream>
using namespace std;

int main() {
    int i = 1;

    cout << "===== PROGRAM DIMULAI =====\n";

//do = aksi akan dilakukan terlebih dahulu (dilakukan dulu (min sekali) baru di cek syaratnya)
    do{
        cout << "Hore " << i << endl;
        i++;
    } while ( i <= 10);

    cout << "\n===== PROGRAM SELESAI ====="; 
return 0;
}