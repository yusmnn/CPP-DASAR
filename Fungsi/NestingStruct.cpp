#include <iostream>
using namespace std;

struct aktor{
    string nama;
    int tahun_lahir;
};

struct film{
    string judul; 
    int tahun; 
    string genre;
    // struct aktor
    aktor pemeran1;
    aktor pemeran2;
    aktor pemeran3;
    aktor pemeran4;
};


int main(){

    aktor aktor1, aktor2, aktor3, aktor4;
    film film1, film2;

    // aktor 1
    aktor1.nama = "Yusman";
    aktor1.tahun_lahir = 2002;

    //aktor 2
    aktor2.nama = "xxio";
    aktor2.tahun_lahir = 2002;
    
    //aktor 3
    aktor3.nama = "james";
    aktor3.tahun_lahir = 2001;
    
    //aktor 4
    aktor4.nama = "lin";
    aktor4.tahun_lahir = 2002;
	
	//film 1
    film1.judul = "tragedi 98";
    film1.genre = " sejarah, nasionalis";
    film1.tahun = 2021;
    film1.pemeran1 = aktor1; //nesting struct
    film1.pemeran2 = aktor2; //nesting struct
    
    //film2
    film2.judul = "pemburu naga";
    film2.genre = " fantasy, overpower";
    film2.tahun = 2021;
    film2.pemeran1 = aktor1; //nesting struct
    film2.pemeran3 = aktor3; //nesting struct
    film2.pemeran4 = aktor4; //nesting struct
    

    cout << "Judul: " << film1.judul << endl;
    cout << film1.pemeran1.nama << endl;
    cout << film1.pemeran2.nama << endl;
    
    cout << "Judul: " << film2.judul << endl;
    cout << film2.pemeran1.nama << endl;
    cout << film2.pemeran3.nama << endl;
    cout << film2.pemeran4.nama << endl;

    return 0;
}
