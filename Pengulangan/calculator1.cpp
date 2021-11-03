#include <iostream>


/*
* Author : Deza Farras Tsany
* Since : 07 September 2019
* Description : Program kalkulator sederhana.
*/


using namespace std;


int main()
{
    float valuePertama, valueKedua, hasil;
    char aritmatika;


    cout << "Program kalkulator sederhana : " << endl << endl;


    // Memasukan input dari user
    cout << "Masukan nilai pertama : ";
    cin >> valuePertama;
    cout << "Pilih operator +, -, /, * : ";
    cin >> aritmatika;
    cout << "Masukan nilai kedua : ";
    cin >> valueKedua;


    cout << endl << "Hasil perhitungan : ";
    cout << valuePertama << aritmatika << valueKedua;


    switch (aritmatika)
    {
        case '+':
            cout << " = " << (valuePertama + valueKedua) << endl;
            break;
        
        case '-':
            cout << " = " << (valuePertama - valueKedua) << endl;
            break;
        
        case '*':
            cout << " = " << (valuePertama * valueKedua) << endl;
            break;
        
        case '/':
            cout << " = " << (valuePertama / valueKedua) << endl;
            break;
        
        default:
            cout << endl << "NOTE: Operator yang anda masukan salah";
            break;
    }


    return 0;
}