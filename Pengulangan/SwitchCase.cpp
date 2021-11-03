#include <iostream>
using namespace std;

int main() {
  int i;

  cout << "Masukkan Nilai : ";
  cin >> i;

  switch (i) {
  case 1 :
  cout << " i = 1 " << endl;
  case 2 :
  cout << " i = 2 " << endl;
  case 3 :
  cout << " i = 3 " << endl;
  
  
  default: "Default";
  }
  std::cout<< "===AKHIR PROGRAM===" << std::endl;
return 0;
}