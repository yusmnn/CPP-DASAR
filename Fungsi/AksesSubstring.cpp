#include <iostream>
#include <string>

using namespace std;

int main(){
    string kalimat1("dayat suka olahraga supaya kamera sehat");
    string kalimat2("ucup aa suka makan pisang di pagi hari aa");

    // substring, mengambil string di tengah-tengah
    // substr(index, panjang)
    cout << kalimat1.substr(6,4) << " ";
    cout << kalimat2.substr(13,5) << endl;

    //mencari posisi dari substring -> find
    cout << "posisi suka : " << kalimat1.find("suka") << endl;
    cout << "posisi pagi : " << kalimat2.find("pagi") << endl;

    // mencari posisi dari depan
    int a = kalimat1.find("ya");
    cout << "temukan ya dimulai dari depan : " << a << endl;

    // mencari posisi dari tengah
    int c = kalimat1.find("ka", a + 1);
    cout << "temukan ka di mulai dari ya + 1 : " << c << endl;

    //mencari posisi dari belakang -> rfind
    int b = kalimat2.rfind("aa");
    cout << "temukan aa di mulai dari akhir : " << b << endl;

    cin.get();
    return 0;
}