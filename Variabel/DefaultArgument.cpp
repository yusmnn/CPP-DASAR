#include <iostream>
using namespace std;

// default argument pada fungsi
double volume_kubus(double i = 1, double j = 1, double k = 1); // membuat default argument

int main() {
    cout << "Volume kubus : " << volume_kubus(5,5,5) << endl;
    cout << "Volume kubus : " << volume_kubus(5,5) << endl; //default dari k = 1
    cout << "Volume kubus : " << volume_kubus() << endl; // default argumentnya = 1

cin.get();
return 0;
}

//prototype
double volume_kubus(double i, double j, double k) {
    return i * j * k;
}