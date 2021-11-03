/*
* deskripsi = source code untuk program kalkulator sederhana menggunakan SwitchCase
* since = 12-september-2021
*/

#include <iostream>
using namespace std;

int main()
{
  float a, b, Hasil;
  char Operator;

  cout << "========PROGRAM KALKULATOR========\n";

  //memasukkan input dari user
  cout << "Masukkan Angka pertama : ";
  cin >> a;
  cout << "Pilih salah-satu operator + - / * : ";
  cin >> Operator;
  cout << "Masukkan Angka Kedua : ";
  cin >> b;

  cout << "Hasil dari : ";
  cout << a << " " << Operator << " " << b;

  switch (Operator)
  {
  case '+':
    cout << " = " << a + b << endl;
    break;

  case '-':
    cout << " = " << a - b << endl;
    break;
  case '*':
    cout << " = " << a * b << endl;
    break;

  case '/':
    cout << " = " << a / b << endl;
    break;

  default:
    " NOTE: Operator yang dimasukkan salah";
  }
  cout << "\n==========PROGRAM SELESAI=========";

  cin.get();
  cin.get();
  return 0;
}