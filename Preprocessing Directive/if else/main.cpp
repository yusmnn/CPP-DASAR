// https://youtu.be/PutBYIbed1k

#include <iostream>

//macro if else
#define ID 1

#if ID == 1
    #define LANG "Indonesia"
#else
    #define LANG "Korea"
#endif

using namespace std;

int main(){

    cout << "Bahasa yang dipilih: "<< LANG << endl;

    return 0;
}
