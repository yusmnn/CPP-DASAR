#include <iostream>
using namespace std;

int i = 8; //variable global

int ambil_global() {
    return i;   // mengambil variable global
}

int x_local(){
    return i = 1; // variable yang scopenya x_local{}
}

int main() {
    cout << "1. variabel global : " << ambil_global() << endl;
    int i = 6; // variable local dari main{}
    cout << "2. variabel local main : " << i << endl;// selama variable di deklarasikan  dalam fungsi yg sama maka tidak di pengaruhi variable global
    cout << "3. variabel global : " << ambil_global() << endl;//mengakses variable global
    cout << "4. variabel x_local : " << x_local() << endl;// mengakses variable di fungsi x_local{}
    cout << "5. variabel local main : " << i << endl;// tidak terpengaruh

    {
        cout << "6. variabel x_local : " << x_local() << endl;
        int i = 10; // variable local block
        cout << "7. variabel local block : " << i << endl;
        cout << "9. variabel global : " << ambil_global() << endl;
    }
       
    cout << "8. variabel local main : " << i << endl;
    cout << "9. variabel global : " << ambil_global() << endl;


    cin.get();
    return 0;
}
