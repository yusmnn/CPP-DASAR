#include <iostream>

using namespace std;

int main () {

  int a = 7;
  int b = 2;
  int hasil;

  //operator standar +, -, *, /, %

  // penjumlahan
  hasil = a + b;
  cout << a << " + " << b << " = " << hasil << endl;

  //pengurangan
  hasil = a - b;
  cout << a << " - " << b << " = " << hasil << endl;
 
  // perkalian
  hasil = a * b;
  cout << a << " x " << b << " = " << hasil << endl;

  //pembagian
  //gunakan float untuk pembagian dengan hasil koma
  hasil = a / b;
  cout << a << " / " << b << " = " << hasil << endl;
  
  //modulus
  hasil = a % b;
  cout << a << " % " << b << " = " << hasil << endl;

//urutan eksekusi berlaku aturan dasar operasi
  hasil = (a - b) * b;
  cout << a << " - " << b << " * " << b <<" = " << hasil << endl;

cin.get();
return 0;
}

