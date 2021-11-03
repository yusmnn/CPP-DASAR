// https://youtu.be/dth70PlVFvQ

#include <iostream>
#include <fstream>
#include <limits>
#include <string>

using namespace std;

struct mahasiswa{
    int pk;
    string NIM;
    string nama;
    string jurusan;
};

//prototype
int getOption();
void checkDataBase(fstream &data);
void addDataMahasiswa(fstream &data);
void displayDataMahasiswa(fstream &data);


int main(){
    fstream data;

    checkDataBase(data);

    
    int pilihan = getOption();
    char is_continue;

    enum option{CREATE = 1, READ, UPDATE, DELETE, FINISH};

    while(pilihan != FINISH ){
        switch (pilihan){
            case CREATE:
                cout << "Menambahkan data mahasiswa" << endl;
                addDataMahasiswa(data);
                break;
            case READ:
                cout << "Menampilkan data mahasiswa" << endl;
                displayDataMahasiswa(data);
                break;
            case UPDATE:
                cout << "Mengubah data mahasiswa" << endl;
                break;
            case DELETE:
                cout << "Menghapus data mahasiswa" << endl;        
                break;        
            default:
                cout << "Pilihan tidak ditemukan" << endl;
                break;
        }

        label_Option:

        cout << "\nIngin melanjutkan Y . N : ";
        cin >> is_continue;  

        if((is_continue == 'y') | (is_continue == 'Y')){
            pilihan = getOption();
        } 
        else if ((is_continue == 'n') | (is_continue == 'N')){
            break;
        }
        else {
            goto label_Option;           
        }
    }

    cout << "=== AKHIR DARI PROGRAM5 ===" << endl;

    cin.get();
    return 0;
}

//untuk check file database ada atau tidak, jika tidak maka akan dibuatkan baru data.bin
void checkDataBase(fstream &data){
    data.open("data.bin", ios::out | ios::in | ios::binary);
    if(data.is_open()){
        cout << "Data ditemukan" << endl;
    }
    else {
        cout << "Data tidak ditemukan, buat data baru" << endl;
        data.close();
        data.open("data.bin", ios::trunc | ios::out | ios::in | ios::binary);
    }
}

//untuk menulis data ke file data.bin
void writeData(fstream &data, int posisi, mahasiswa &inputmahasiswa){
    data.seekp((posisi-1)*sizeof(mahasiswa), ios::beg);
    data.write(reinterpret_cast<char*>(&inputmahasiswa),sizeof(mahasiswa));
}

//untuk melihat ukuran perdata di file data.bin
int getDataSize(fstream &data){
    int start, end;
    data.seekg(0,ios::beg);
    start = data.tellg();   
    data.seekg(0,ios::end);
    end = data.tellg(); 
    
    return (end - start) / sizeof(mahasiswa);
}

//untuk membaca data pk di mahasiswa
mahasiswa readData(fstream &data, int posisi){
    mahasiswa readMahasiswa;
    data.seekg((posisi-1)*sizeof(mahasiswa),ios::beg);
    data.read(reinterpret_cast<char*>(&readMahasiswa),sizeof(mahasiswa));
    return readMahasiswa;
}

//[case CREATE] untuk menambahkan data di struct mahasiswa di file data.bin
void addDataMahasiswa(fstream &data){
    mahasiswa inputMahasiswa, lastMahasiswa;

    int size = getDataSize(data);
    cout << "ukuran data: " << size << endl;
    
    if(size == 0){
        inputMahasiswa.pk = 1;
    }
    else {
        inputMahasiswa = readData(data, size);
        cout << "pk = " << inputMahasiswa.pk << endl;
        inputMahasiswa.pk = lastMahasiswa.pk + 1;
    }

    cout << "NIM    : ";
    getline(cin, inputMahasiswa.NIM);
    cout << "Nama   : ";
    getline(cin, inputMahasiswa.nama);
    cout << "Jurusan: ";
    getline(cin, inputMahasiswa.jurusan);

    writeData(data,size+1,inputMahasiswa);
}

//[case READ]untuk menampilkan data mahasiswa berbentuk kolom
void displayDataMahasiswa(fstream &data){
    int size = getDataSize(data);
    mahasiswa showMahasiswa;
    cout << "no\tpk\tNIM\t\tNama\t\t\tJurusan" << endl;
    for(int i = 1; i <= size; i++){
        showMahasiswa = readData(data, i);
        cout << i << "\t";
        cout << showMahasiswa.pk << "\t";
        cout << showMahasiswa.NIM << "\t\t";
        cout << showMahasiswa.nama << "\t\t\t";
        cout << showMahasiswa.jurusan << endl;
    }
}

//membuat list menu
int  getOption(){
    int input;
    system("cls"); //matikan jika ingin menampilkan output database sudah ada atau tidak 
    cout << "\nPROGRAM CRUD DATA MAHASISWA" << endl;
    cout << "=============================" << endl;
    cout << "1. Tambah Data mahasiswa" << endl;
    cout << "2. Tampikan Data mahasiswa" << endl;
    cout << "3. Ubah Data mahasiswa" << endl;
    cout << "4. Hapus Data mahasiswa" << endl;
    cout << "5. Selesai" << endl;
    cout << "=============================" << endl;
    cout << "Pilih [1 - 5] : ";
    cin >> input;
    cin.ignore(numeric_limits<streamsize>::max(),'\n'); //di ambil dari #include <limits> agar enter kebawah
    return input;
}