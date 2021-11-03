#include <iostream>
#include <string>

using namespace std;

int main() {

    string Kata_rahasia ("yusman");
    string input;

    
    while(true){
        cout << " masukkan nama :";
        cin >> input;

        if(input == Kata_rahasia){
            cout << " kata anda benar" << endl;
         break;
        } else {
            cout << "Kata anda salah" << endl;
        }
    }

    cout << "program selesai" << endl;



    cin.get();
    return 0;
}