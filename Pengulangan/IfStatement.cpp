#include <iostream>
using namespace std;

int main() {

  int a;

  cout << "masukkan Nilai : ";
  cin >> a ;

 //statement
  if ( a <= 8) //kondisi dalam bentuk boolean ((true , false) , (0 , 1)
  {
    cout << "Nilai yang dipilih benar" << endl;
      if ( a == 7) {
           cout << "Nilai ini adalah nilai keberuntungan :)"<< endl;
    }
  }
  cout << "===selesai===";
  return 0;
}