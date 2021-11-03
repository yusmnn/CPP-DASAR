//https://youtu.be/ODv5oleRpEg

#include <iostream>
#include "namespace.h"

using namespace yusman;

void fungsi2(){
    std::cout << "\nini adalah fungsi biasa" << std::endl;
}

int main(){

    //// dari namespace yusman
    //// jika tidak menggunakan using namespace yusman
    // yusman::fungsi();
    // yusman::cout(100);
    // std::cout << yusman::i << std::endl;

    //jika menggunakan using namespace [line 6]
    fungsi();
    cout(100);
    std::cout << i << std::endl; //kelemahan kita tidak tau i itu punya siapa


    // dari iostream
    fungsi2();

    return 0;
}