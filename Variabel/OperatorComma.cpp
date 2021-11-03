#include <iostream>

using namespace std;

// comma operator : didalamnya dapat melakukan 
// ekspresi(fungsi,cout, pendeklarasian operator, dll)

void printData(int i){
    cout << i << endl;
}

int main(){
    int a, b, c;

// penggunaan koma operator
    a = (b =3, printData(b), c = 2, cout << c << endl, (b + c)); 


    cout << a << endl;

    cin.get();
    return 0;
}