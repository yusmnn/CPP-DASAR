#include <iostream>
#include <array>

using namespace std;

array<string, 3> nama;

int main(){

    cout << "nama ke-1: ";
    cin >> nama[0];
    cout << "nama ke-2: ";
    cin >> nama[1];
    cout << "nama ke-3: ";
    cin >> nama[2];

    cout << "ISI ARRAY: ";
    for(int i = 0; i < nama.size(); i++){
        cout << nama[i] <<", ";  
    }

    return 0;
}