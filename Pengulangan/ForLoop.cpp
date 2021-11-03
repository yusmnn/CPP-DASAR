#include <iostream>
using namespace std;

int main() {

cout << "===== PROGRAM DIMULAI=====\n";
//forloop untuk increment
    cout << " increment :" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << i << endl; 
    }

//forloop untuk decrement
    cout << " decrement :" << endl;
    for (int i = 1; i >= -10; i--){
        cout << i << endl;
    }

//forloop untuk assignment operator
    cout << " assignment operator :" << endl;
    for (int i = 5; i <= 50; i += 5){
        cout << i << endl;
    }

//forloop untuk compound assignment operator
    int j = 0;
    cout << " assignment operator :" << endl;
    for (int i = 1; i <= 10;  j += 2, i++) {
       
        cout << i << " || " << j << endl;
    }


cout << "\n===== PROGRAM SELESAI=====";
    
cin.get();  
return 0;
}