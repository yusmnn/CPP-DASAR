#include <iostream>
#include <bitset>
#include <string>

using namespace std;

// BITWISE OPERATOR:
/*
	& 	AND Bitwise AND
	| 	OR  Bitwise inclusive OR
	^ 	XOR Bitwise exclusive OR
	~	NOT
	<<	SHL Shift Bit Left
	>> 	SHR Shift Bit Right
*/
void printBinary(unsigned val, string nama){
	cout << nama << " = " << bitset<8>(val) << endl;
}

int main() {

	unsigned short a = 6;
	unsigned short b = 10;
	unsigned short c;

	cout << "\n& - Bitwise AND" << endl;
	c = a & b;
	printBinary(a,"a");
	printBinary(b,"b");
	printBinary(c,"c");
	cout << "c = " << c << endl;

	cout << "\n| - Bitwise OR" << endl;
	c = a | b;
	printBinary(a,"a");
	printBinary(b,"b");
	printBinary(c,"c");
	cout << "c = " << c << endl;

	cout << "\n^ - Bitwise XOR" << endl;
	c = a ^ b;
	printBinary(a,"a");
	printBinary(b,"b");
	printBinary(c,"c");
	cout << "c = " << c << endl;

	cout << "\n~ - Bitwise NOT" << endl;
	c = ~a;
	printBinary(a,"a");
	printBinary(b,"b");
	printBinary(c,"c");
	cout << "c = " << c << endl;

	cout << "\n<< - Bitwise SHL" << endl;
	c = a << 1; //geser satu ke kiri
	printBinary(a,"a");
	printBinary(c,"c");
	cout << "c = " << c << endl;

	cout << "\n>> - Bitwise SHR" << endl;
	c = b >> 1; //geser satu ke kanan
	printBinary(b,"b");
	printBinary(c,"c");
	cout << "c = " << c << endl;


	cin.get();
	return 0;
}