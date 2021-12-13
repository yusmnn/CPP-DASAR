// https://youtu.be/6Bykw0BqK4Q

//auto -> otomatis mendeteksi lalu mengeluarkan tipe data apa yang paling aman digunakan
// tidak berjalan untuk tipe data string

#include <iostream>
#include <typeinfo>

template<typename T, typename U>
auto max(T data1, U data2){
    return (data1 > data2) ? T(data1) : U(data2);
}

int main(){

    int a = 10;
    double b = 3.14;
    float c = 22.7f;
    char d = 'Y';
    std::string e = "Yusman";

    auto f = max(b,c);

    std::cout << a << "\t tipe a: " << typeid(a).name() << std::endl;
    std::cout << b << "\t tipe b: " << typeid(b).name() << std::endl;
    std::cout << c << "\t tipe c: " << typeid(c).name() << std::endl;
    std::cout << d << "\t tipe d: " << typeid(d).name() << std::endl;
    std::cout << e << "\t tipe e: " << typeid(e).name() << std::endl;
    std::cout << f << "\t tipe Auto: " << typeid(f).name() << std::endl;


    return 0;
}