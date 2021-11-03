#include <iostream>
#include <string>
using namespace std;
 
string nama= "Global Variabel : belajarcpp.com"; //Global Variabel
 
int main ()
{
    string nama = "Lokal Variabel : belajarcpp.com"; //Local variabel
    cout<<nama<<endl;
    cout<<::nama<<endl;//Scope Resolution Operator
    return 0;
}