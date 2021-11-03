//https://youtu.be/8El0_qrEfgc

#include <iostream>

using namespace std;

//prototype
int getOption();

int main(){
    int pilihan = getOption();
    char is_continue;

    enum option{CREATE = 1, READ, UPDATE, DELETE, FINISH}; //berurutan dari 1 - 5

    while(pilihan != FINISH ){
        switch (pilihan){
            case CREATE:
                cout << "Menambahkan data mahasiswa" << endl;
                break;
            case READ:
                cout << "Menampilkan data mahasiswa" << endl;
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

int  getOption(){
    int input;

    system("cls");

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

    return input;
}