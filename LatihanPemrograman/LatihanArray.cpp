#include <iostream>
#include <array>
using namespace std;

int main() {

    array <int,10> value;

    cout << "Program menampilkan grafik nilai" << endl << endl;

    for(int i = 0; i <= value.size(); i++){
        cout << "Jumlah mahasiswa dengan nilai ";
        if(i == 0){
            cout << "0-10 : ";       
        }else if(i == 10){
            cout << "100  : ";         
        }
        else {
            cout << i * 10 << "-" << (i * 10) + 9 << ": ";         
        }
        cin >> value[i];
    }
    cout << endl;
    cout << "Grafik nilai " << endl << endl;
    for(int i = 0; i <= value.size(); i++){
        if(i == 0){
            cout << "0-10 : ";       
        }else if(i == 10){
            cout << "100  : ";         
        }
        else {
            cout << i * 10 << "-" << (i * 10) + 9 << ": ";         
        }
        for( int bintang = 0; bintang < value[i]; bintang ++){
            cout << "*";
        }
        cout << endl;
    }


    cin.get();
    return 0;
}