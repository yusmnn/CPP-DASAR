#include <iostream>
using namespace std;

int main() {
  // operator logika : and . or . not

  int a = 8;
  int b = 7;
  bool hasil;

  // and atau && : kedua nilai harus benar untuk menghasilkan true(1)
  cout << "Untuk operator and atau && : " << endl;
  hasil = (a == 8) && ( b == 7 ); // true dan true
  cout << hasil << endl;
  hasil = (a == 8) && ( b == 8 ); // true dan false
  cout << hasil << endl;
  hasil = (a == 9) and ( b == 7 ); // false dan true
  cout << hasil << endl;
  hasil = (a == 9) and ( b == 8 ); // false dan false
  cout << hasil << endl;

  // or atau || : salah satu nilai true maka hasilnya adalah true
  cout << "Untuk operator or atau || : " << endl;
  hasil = (a == 8) or ( b == 7 ); // true dan true
  cout << hasil << endl;
  hasil = (a == 8) or ( b == 8 ); // true dan false
  cout << hasil << endl;
  hasil = (a == 9) || ( b == 7 ); // false dan true
  cout << hasil << endl;
  hasil = (a == 9) || ( b == 8 ); // false dan false
  cout << hasil << endl;

  // not atau !
cout << "Untuk operator not atau ! : " << endl;
  hasil = !(a == 8);
  cout << hasil << endl;
  hasil = !(a > b);
  cout << hasil << endl;
  hasil = !(a == 8) && ( b == 7 ); //false and true 
  cout << hasil << endl;
  hasil = not(a <= b); //true
  cout << hasil << endl;
  hasil = not(a <= b) or (b >= a); // true and false
  cout << hasil << endl;

return 0;
}