// string adalah sebuah char array yang bisa memasukkan langsung kata

#include <iostream>
#include <string>

using namespace std;

int main(){
    string kata("C++");
    cout << kata << endl;

    string data;

    cout << "Masukkan kata" << endl;
    cin >> data;

    cout << "Kata yang di masukkan adalah : " << endl;
    cout << data;

    cin.get();
    return 0;
}