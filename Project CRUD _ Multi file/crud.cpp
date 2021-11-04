// https://youtu.be/QsRxAZOgBD4?t=603

#include <iostream>
#include <fstream>
#include <limits>
#include <string>
#include "crud.h"


//(create.1) untuk check file database ada atau tidak, jika tidak maka akan dibuatkan baru data.bin
void crud::checkDataBase(std::fstream &data){
    data.open("data.bin", std::ios::out | std::ios::in | std::ios::binary);
    if(data.is_open()){
        std::cout << "Data ditemukan" << std::endl;
    }
    else {
        std::cout << "Data tidak ditemukan, buat data baru" << std::endl;
        data.close();
        data.open("data.bin", std::ios::trunc | std::ios::out | std::ios::in | std::ios::binary);
    }
}

//(create.2) untuk menulis data ke file data.bin
void crud::writeData(std::fstream &data, int posisi, crud::mahasiswa &inputmahasiswa){
    data.seekp((posisi-1)*sizeof(crud::mahasiswa), std::ios::beg);
    data.write(reinterpret_cast<char*>(&inputmahasiswa),sizeof(crud::mahasiswa));
}

//(create.3) untuk melihat ukuran perdata di file data.bin
int crud::getDataSize(std::fstream &data){
    int start, end;
    data.seekg(0,std::ios::beg);
    start = data.tellg();   
    data.seekg(0,std::ios::end);
    end = data.tellg(); 
        
    return (end - start) / sizeof(crud::mahasiswa);
}

//(create.4) untuk membaca data pk di mahasiswa
crud::mahasiswa crud::readData(std::fstream &data, int posisi){
    crud::mahasiswa readMahasiswa;
    data.seekg((posisi-1)*sizeof(crud::mahasiswa),std::ios::beg);
    data.read(reinterpret_cast<char*>(&readMahasiswa),sizeof(crud::mahasiswa));
    return readMahasiswa;
}

//membuat list menu
int crud::getOption(){
    int input;
    system("cls");
    std::cout << "\nPROGRAM CRUD DATA MAHASISWA" << std::endl;
    std::cout << "=============================" << std::endl;
    std::cout << "1. Tambah Data mahasiswa" << std::endl;
    std::cout << "2. Tampikan Data mahasiswa" << std::endl;
    std::cout << "3. Ubah Data mahasiswa" << std::endl;
    std::cout << "4. Hapus Data mahasiswa" << std::endl;
    std::cout << "5. Selesai" << std::endl;
    std::cout << "=============================" << std::endl;
    std::cout << "Pilih [1 - 5] : ";
    std::cin >> input;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n'); //di ambil dari #include <limits> agar enter kebawah
    return input;
}

//[case CREATE] untuk menambahkan data di struct mahasiswa di file data.bin
void crud::addDataMahasiswa(std::fstream &data){
        crud::mahasiswa inputMahasiswa, lastMahasiswa;

        int size = crud::getDataSize(data);
        std::cout << "ukuran data: " << size << std::endl;
        
        if(size == 0){
            inputMahasiswa.pk = 1;
        }
        else {
            inputMahasiswa = crud::readData(data, size);
            std::cout << "pk = " << inputMahasiswa.pk << std::endl;
            inputMahasiswa.pk = lastMahasiswa.pk + 1;
        }

        std::cout << "NIM    : ";
        getline(std::cin, inputMahasiswa.NIM);
        std::cout << "Nama   : ";
        getline(std::cin, inputMahasiswa.nama);
        std::cout << "Jurusan: ";
        getline(std::cin, inputMahasiswa.jurusan);

        crud::writeData(data,size+1,inputMahasiswa);
    }

//[case READ] untuk menampilkan data mahasiswa berbentuk kolom
void crud::displayDataMahasiswa(std::fstream &data){
    int size = crud::getDataSize(data);
    crud::mahasiswa showMahasiswa;
    std::cout << "no\tpk\tNIM\t\tNama\t\t\tJurusan" << std::endl;
    for(int i = 1; i <= size; i++){
        showMahasiswa = crud::readData(data, i);
        std::cout << i << "\t";
        std::cout << showMahasiswa.pk << "\t";
        std::cout << showMahasiswa.NIM << "\t\t";
        std::cout << showMahasiswa.nama << "\t\t\t";
        std::cout << showMahasiswa.jurusan << std::endl;
    }
}

//[case UPDATE] untuk mengubah data didalam file data.bin kemudian ditampilkan di kolom
void crud::updateRecord(std::fstream &data){
    int nomor;
    crud::mahasiswa updateMahasiswa;
    std::cout << "\nPilih no.  : ";
    std::cin >> nomor;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n'); //agar enter kebawah

    updateMahasiswa = crud::readData(data, nomor);

    std::cout << "\nPilihan data   :" << std::endl;
    std::cout << "NIM    : " << updateMahasiswa.NIM << std::endl;
    std::cout << "Nama   : " << updateMahasiswa.nama << std::endl;
    std::cout << "Jurusan: " << updateMahasiswa.jurusan << std::endl;

    std::cout << "\nMerubah data   :" << std::endl;
    std::cout << "NIM    : ";getline(std::cin, updateMahasiswa.NIM);
    std::cout << "Nama   : ";getline(std::cin, updateMahasiswa.nama);
    std::cout << "Jurusan: ";getline(std::cin, updateMahasiswa.jurusan);
    std::cout << std::endl;
    crud::writeData(data, nomor, updateMahasiswa); // untuk menampilkan data yang sudah diubah ke dalam table
}

//[case delete] untuk menghapus item data didalam file data.bin kemudian ditampilkan di kolom
void crud::deleteRecord(std::fstream &data){
    int nomor, size, offset;
    offset = 0; //inisialisasi agar tampil di table
    crud::mahasiswa blankMahasiswa, tempMahasiswa;
    std::fstream dataSementara;

    size = crud::getDataSize(data);

    //1. memilih nomor
    std::cout << "\nPilih nomor : ";
    std::cin >> nomor;

    //2. diposisi ini diisi dengan data kosong
    crud::writeData(data, nomor, blankMahasiswa);

    //3. cek data dari file data.bin, jika ada pindahkan ke file sementara [temp.bin]
    dataSementara.open("temp.bin", std::ios::trunc | std::ios::out | std::ios::in | std::ios::binary);

    for(int i = 1; i <= size; i++){
        tempMahasiswa = crud::readData(data, i);
            
        if(!tempMahasiswa.NIM.empty()){
            crud::writeData(dataSementara,i - offset, tempMahasiswa);
        }
        else {
            offset++;
            std::cout << "menghapus Item" << std::endl;
        }
    }

    //4. memindahkan kembali data dari file sementara ke file.bin
    size = crud::getDataSize(dataSementara);
    data.close();
    data.open("data.bin", std::ios::trunc | std::ios::out | std::ios::binary);
    data.close();
    data.open("data.bin", std::ios::out | std::ios::in | std::ios::binary);

    for(int i = 1; i <= size; i++){
        tempMahasiswa = crud::readData(dataSementara, i);
        crud::writeData(data, i, tempMahasiswa);
    }
}

