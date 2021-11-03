#include <iostream>
using namespace std;

int main(){

    int i = 10;
    int *ptr = &i;
    int  c = *ptr;
    cout << i << endl;
    cout << &i << endl;
    cout << c << endl; 
    cout << ptr << endl;
    cout << &ptr << endl;


    cin.get();
    return 0;
}