//https://youtu.be/qgGrNIEAIdw

#include <iostream>
#include "bersama.h"
#include "foo.h"
#include "bar.h"
/*
//#define FOO

//ifdef -> jika itu sudah terdefenisi
// asal sudah di deklarasikan maka true

#ifdef FOO
    #define TEST_FOO "FOO ada"
#else
    #define TEST_FOO " FOO tidak ada"
#endif

// ifndef -> jika itu tidak ada
// jika belum terdeklarasi maka true [kebalikan dari ifdef]
#ifndef FOO
    #define FOO "FOO baru"
#endif
*/

using namespace std;

int main(){
    Mahasiswa mahasiswa;
    mahasiswa.NIM = 10;
    cout << mahasiswa.NIM << endl;
    cout << FOO << endl;


    return 0;
}