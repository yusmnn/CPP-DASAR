#include <iostream>
using namespace std;

int main() {
  int a = 8;
  int b = 2;
  
  cout << a + b << std::endl;

  // penggunaan cin
  int i;
  cout << "Masukkan Nilai : ";
  cin >> i;
  cout << "Nilai yang anda masukkan adalah : ";
  cout << i <<endl;
  cout << "Terima kasih";

  cin.get(); 
  return 0;
}