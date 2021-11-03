#include <iostream>
#include <string>

using namespace std;

int main(){
    
    string kata("sedan");

    cout << kata << endl;

    //mengambil karakter berdasarkan index
    cout << kata[0] << endl;
    cout << kata[2] << endl;
    cout << kata[4] << endl;

    //merubah index didalam string
    kata[1] = 'E';

    //menambahkan kata

    string kata2( kata + "G");  
    cout << kata2 << endl;

    
    string kata3("belajar");
    kata2.append(" " + kata3);
    cout << kata3 << endl;

    string kata4("pemrograman C++");
    kata2 += " " + kata4;
    cout << kata2 << endl;

    cout << "\nkata 1 : " << kata << endl;
    cout << "kata 2 : " << kata2 << endl;
    cout << "kata 3 : " << kata3 << endl;
    cout << "kata 4 : " << kata4 << endl << endl;


    return 0;
}