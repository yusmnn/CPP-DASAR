/*overloading = menimpa atau memilih fungsi mana yang akan dipakai*/

#include <iostream>
using namespace std;

int luas_kotak(int panjang, int lebar);

//prototype function 1
double luas_kotak( double sisi);

//overload function 2
int luas_kotak(int sisi){
    return sisi * sisi;
}

int main(){
    cout << " luas 4 x 6 : " << luas_kotak(4,6) << endl;
    cout << " luas 4.5 x 4.5 : " << luas_kotak(4.5) << endl;
    cout << " luas 7 : " << luas_kotak(7) << endl;
cin.get();
return 0;
}

// basic function
int luas_kotak( int panjang, int lebar){
   int luas = panjang * lebar;
    return luas;
}

//overload function 1
double luas_kotak(double sisi){
    return sisi * sisi;
}