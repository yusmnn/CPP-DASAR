#include <iostream>
#include <fstream> //ofstream, ifstream, fstream

using namespace std;

int main(){
    ofstream myFile;

    // ios::out = default,operasi output
    // ios::app = menuliskan pada akhir baris [app = append] 
    // ios::trunc = default, membuat file jika tidak ada, jika ada akan dihapus dlalu membuat baru
    int a = 666;
    myFile.open("data1.txt", ios::out);
    myFile << "\nmenuliskan pada data1\n";
    myFile << a;    //bisa menggunakan int tetapi menjadi string
    myFile.close(); //harus diclose agar melepas hubungan dengan si data
    

    myFile.open("data2.txt", ios::trunc);
    myFile << "\nmenuliskan pada data2";
    myFile.close();

    myFile.open("data3.txt", ios::app); //append
    myFile << "\nmenuliskan pada data3";
    myFile.close();

    return 0;
}

