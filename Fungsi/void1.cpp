#include <iostream>
using namespace std;

//reporter -> melaporkan kembali suatu nilai 
int aritmatika(int a, int b, int c) {
    int d;
    d = (a * b) / c;
    return d;
}
//worker -> menjalankan saja tanpa feedback
void tampilkan( int n) {
    cout << "menampilkan dengan void ";
    cout << n;
}

int main() {
    int e, f, g, output;
    cout << "nilai 1 : ";
    cin >> e;
    cout << "nilai 2 : ";
    cin >> f;
    cout << "nilai 3 : ";
    cin >> g;

    output = aritmatika(e, f, g);
    tampilkan(output);

    return 0;
}