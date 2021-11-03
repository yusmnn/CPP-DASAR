//assignment

#include<iostream>
using namespace std;

int main() {

  int a = 8;

//assignment operator
    a += 3;
    cout << "Nilai a ditambah 3 adalah : " << a << endl;
    a -= 3;
    cout << "Nilai a dikurangi 3 adalah : " << a << endl;
    a *= 100;
    cout << "Nilai a dikali 100 adalah : " << a << endl;
    a /= 3;
    cout << "Nilai a dibagi 3 adalah : " << a << endl;
    a %= 3;
    cout << "Nilai a dimodulo 3 adalah : " << a << endl;


  cin.get();
  return 0; 
}
