#include <iostream>
using namespace std;

int main() {

  int a = 11;

//increment adalah penambahan secara bertahap

//preincrement = ++ di depan
  cout << ++a << endl;
  cout << ++a << endl;
  cout << a << endl << endl;
//postincrement = ++ di belakang
  cout << a++ << endl;
  cout << a++ << endl;
  cout << a << endl;

cout << "==========" << endl;
// decrement adalah pengurangan secara bertahap

//predecrement = -- di depan
  cout << --a << endl;
  cout << --a << endl;
  cout << a << endl << endl;
//postdecrement = -- di belakang
  cout << a-- << endl;
  cout << a-- << endl;
  cout << a << endl;

cin.get();
return 0;
}