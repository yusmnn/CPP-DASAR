#include <iostream>
using namespace std;

//pemilihan if jika 1 - 3 kondisi
int main() {
   int i;
   
   cout << "masukkan Nilai : ";
   cin >> i;
   if (i == 8) {
      cout << "8 adalah nilai dari int i" << endl;
   } else {
      cout << i << " Bukan nilai dari i" << endl;
   }

   cout << "===Selesai===" <<endl;
return 0;
}