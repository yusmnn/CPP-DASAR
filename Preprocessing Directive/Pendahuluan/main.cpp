//https://youtu.be/H2sAAx3asZE
#include <iostream>

//macro -> adalah segala sesuatu yang dideklarasikan sebelum di compile dan tidak memakai memori
#define PI 3.14     

using namespace std;

// yang ada tanda " # " (crash/hash) itu namanya preprocessing dan bukan diproses oleh compiler tetapi preprocessor
// preprocessing tidak memiliki addres alamat hanya mendefinisikan 

int main(){
        double pi = 3.14;

        cout << "nilai dari double pi : " << pi << endl;
        cout << "addres memori double pi : " << &pi << endl << endl;

        cout << "nilai macro PI :"<< PI << endl;
        //cout << "addres memori macro PI : " << &PI << endl;   ->tidak memiliki addres memori

    return 0;
}
