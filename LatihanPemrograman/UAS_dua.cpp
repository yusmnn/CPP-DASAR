#include <iostream>

using namespace std;

int main(){
	int a,b,c,*d;
	a =7;
	d = &b;
	*d = 10;
	d = &c;
	c = a * b;
	*d = a + b;
	c++;
	cout << "Nilai C : " << c << endl;
	cout << a;
	cout << b;
	cout << *d;
}
