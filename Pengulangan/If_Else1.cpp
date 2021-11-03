#include <iostream> // untuk menggunakan cout, cin, endl
#include <string> //untuk menggunakan fungsi string
#include <cstdlib> // untuk menggunakan fungsi exit
using namespace std;

// penggunaan if jika banyak kondisi
int main() {
  int NoHari;
  string NamaHari;

  cout << "Masukkan urutan hari : ";
  cin >> NoHari;

  if (NoHari == 1) {
    NamaHari = "senin";
  } else if (NoHari == 2) {
    NamaHari = "Selasa";
  } else if (NoHari == 3) {
    NamaHari = "Rabu";
  } else if (NoHari == 4) {
    NamaHari = "Kamis";
  } else if (NoHari == 5) {
    NamaHari = "Jumat";
  } else if (NoHari == 6) {
    NamaHari = "Sabtu";
  } else if (NoHari == 7) {
   NamaHari = "Minggu";
  } else { cout << "Tidak ada hari ke-"<< NoHari << endl; 
  exit(1);
  }


  cout << "Hari ke-"<<NoHari << "adalah" << NamaHari << endl;
  
  return 0;
}