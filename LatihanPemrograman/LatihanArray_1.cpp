#include <iostream>
#include <string>

using namespace std;

struct data{
    int nim;
    string nama;
    string jurusan;
};

int main(){
    int nim[3];
    data mhs[3];

    for (int i = 0; i < 3; i++){
        cout<<"masukkan nim"<<endl;
        cin>>mhs[i].nim;
        cout<<"masukkan nama"<<endl;
        cin>>mhs[i].nama;
        cout<<"masukkan jurusan"<<endl;
        cin>>mhs[i].jurusan;

        cout <<"biodata ke : "<<i+1<<endl;
        cout <<"nim "<< mhs[i].nim << endl;
        cout <<"nama"<< mhs[i].nama <<endl;
        cout <<"jurusan"<< mhs[i].jurusan <<endl;
    }

    cin.get();
    return 0;
}