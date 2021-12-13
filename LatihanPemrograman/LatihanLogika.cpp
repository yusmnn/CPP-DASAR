#include <iostream>
//#include <string>

using namespace std;

int main(){

    string a = "kopi";
    string b = "greentea";
    string c;

    // cout << "NILAI AWAL\n";
    // cout << "gelas a : " << a << endl;
    // cout << "gelas b : " << b << endl;

    c = a;
    a = b;
    b = c;

    cout << "DIUBAH\n";
    cout << "gelas a : " << a << endl;
    cout << "gelas b : " << b << endl;

    cin.get();
    return 0;

}