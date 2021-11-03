// array adalah kumpulan data
#include <iostream>
using namespace std;

int main() {
    int array[5] = {0,1,2,3,4}; //array dimuali dari nol

    cout << &array[0] << " nilai  " << array[0] << endl;
    cout << &array[1] << " nilai  " << array[1] << endl;
    cout << &array[2] << " nilai  " << array[2] << endl;
    cout << &array[3] << " nilai  " << array[3] << endl;
    cout << &array[4] << " nilai  " << array[4] << endl << endl;

    // memanipulasi nilai array
    //pertama
    int *ptr = array;
    *(ptr + 4) = 100;
    cout << &array[0] << " nilai  " << array[0] << endl;
    cout << &array[1] << " nilai  " << array[1] << endl;
    cout << &array[2] << " nilai  " << array[2] << endl;
    cout << &array[3] << " nilai  " << array[3] << endl;
    cout << &array[4] << " nilai  " << array[4] << endl <<endl;

    //kedua
    array[1] = 11;
    cout << &array[0] << " nilai  " << array[0] << endl;
    cout << &array[1] << " nilai  " << array[1] << endl;
    cout << &array[2] << " nilai  " << array[2] << endl;
    cout << &array[3] << " nilai  " << array[3] << endl;
    cout << &array[4] << " nilai  " << array[4] << endl << endl;

    //array basic c++
    cout << "Ukuran array = " << sizeof(array) << " byte" << endl;
    cout << "Jumlah member array = " << sizeof(array) / sizeof(int) << endl;

cin.get();
return 0;
}
