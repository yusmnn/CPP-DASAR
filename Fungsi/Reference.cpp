#include <iostream>
using namespace std;

     //variable
    int a = 11;

int main(){
    //pointer
    int *ptr = &a; 
    
    cout << "  nilai dari a " << a << endl;
    cout << "address dari a " << &a << endl << endl;;

    //reference
    int &b = a;

    cout << "  nilai dari b " << b << endl;
    cout << "address dari b " << &b << endl << endl;

    a = 1;
    cout << "  nilai dari a " << a << endl;
    cout << "address dari a " << &a << endl << endl;
   
    b = 8;
    cout << "  nilai dari b " << *ptr << endl;
    cout << "address dari b " << &b << endl;


    cin.get();
    return 0;
}