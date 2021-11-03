#include <iostream>
using namespace std;

int main() {
    // looping array untuk di c++ 11 terbaru
    /*
        for (deklarasi variabel : array) {
            statement
        }
    */


    int ArrayNilai[11] = {0,1,2,3,4,5,6,7,8,9,10};
    for(int nilai : ArrayNilai){
        cout << nilai << endl;
    }

    cin.get();
    return 0;
}