//https://youtu.be/u3h22jZPUhI

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    fstream myFile;
    int hasil;
    myFile.open("data.bin", ios::in | ios::binary);

    myFile.read(reinterpret_cast<char*>(&hasil), sizeof(hasil));

    cout << "besar integer = " << sizeof(hasil) << endl;
    cout << hasil << endl;
    

    return 0;
}

// int number = 10;
//     myFile.open("data.bin", ios::out | ios::binary);
//     myFile.write(reinterpret_cast<char*>(&number), sizeof(number));
//     myFile.close();