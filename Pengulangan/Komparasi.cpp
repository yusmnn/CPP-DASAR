#include <iostream>
using namespace std;
// 0 = false
// 1 = true
// 1. == sebanding
// 2. != tidak sebanding
// 3. < kurang dari
// 4. > lebih dari
// 5. <= kurang dari sama dengan
// 6. >= lebih dari sama dengan
	 
int main() {
	int a = 4;
	int b = 3;

	bool hasil1, hasil2;

	// komparasi relation expretion

	// 1
	hasil1 = (a == b);
	cout << hasil1 << endl;
	// 2
	hasil2 = ( a != b);
	cout << hasil2 << endl;
	// 3
	hasil1 = (a < b);
	cout << hasil1 << endl;
	// 4
	hasil2 = ( a > b);
	cout << hasil2 << endl;
	// 5
	hasil1 = (a <= b);
	cout << hasil1 << endl;
	// 6
	hasil2 = ( a >= b);
	cout << hasil2 << endl;

	// latihan
	cout << "Latihan : " << endl;
	hasil1 = (a >= b) && (a = 4); //true dan true
	cout << hasil1 << endl;
	hasil1 = (b < 4);
	cout << hasil1 << endl; 

	return 0;
}