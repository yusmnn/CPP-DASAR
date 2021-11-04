
// UNTUK COMPILE & RUN :
// 1. g++ main.cpp crud.cpp -o myfolder
// 2. ./myfolder


#include <iostream>
#include <fstream>
#include <limits>
#include <string>
#include "crud.h"

// yang crud:: berarti include dari crud.h
// yang std:: berarti include dari iostream

int main(){
    std::fstream data;

    crud::checkDataBase(data);

    
    int pilihan = crud::getOption();
    char is_continue;

    enum option{CREATE = 1, READ, UPDATE, DELETE, FINISH};

    while(pilihan != FINISH ){
        switch (pilihan){
            case CREATE:
                std::cout << "Menambahkan data mahasiswa" << std::endl;
                crud::addDataMahasiswa(data);
                break;
            case READ:
                std::cout << "Menampilkan data mahasiswa" << std::endl;
                crud::displayDataMahasiswa(data);
                break;
            case UPDATE:
                std::cout << "Mengubah data mahasiswa" << std::endl;
                crud::displayDataMahasiswa(data);
                crud::updateRecord(data);
                crud::displayDataMahasiswa(data);
                break;
            case DELETE:
                std::cout << "Menghapus data mahasiswa" << std::endl;
                crud::displayDataMahasiswa(data);
                crud::deleteRecord(data);
                crud::displayDataMahasiswa(data);      
                break;        
            default:
                std::cout << "Pilihan tidak ditemukan" << std::endl;
                break;
        }

        label_Option:

        std::cout << "\nIngin melanjutkan Y . N : ";
        std::cin >> is_continue;  

        if((is_continue == 'y') | (is_continue == 'Y')){
            pilihan = crud::getOption();
        } 
        else if ((is_continue == 'n') | (is_continue == 'N')){
            break;
        }
        else {
            goto label_Option;           
        }
    }

    std::cout << "=== AKHIR DARI PROGRAM5 ===" << std::endl;

    std::cin.get();
    return 0;
}