// header file -> untuk menghubungkan crud.cpp ke main.cpp

#include <fstream>
#include <limits>
#include <string>

namespace crud {
    struct mahasiswa{
        int pk;
        std::string NIM;
        std::string nama;
        std::string jurusan;
    };

    //prototype
    int getOption();
    void checkDataBase(std::fstream &data);
    void writeData(std::fstream &data, int posisi, mahasiswa &inputmahasiswa);
    int getDataSize(std::fstream &data);
    mahasiswa readData(std::fstream &data, int posisi);     
    void addDataMahasiswa(std::fstream &data);
    void displayDataMahasiswa(std::fstream &data);
    void updateRecord(std::fstream &data);
    void deleteRecord(std::fstream &data);    
}
