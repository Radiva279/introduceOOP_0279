#include <iostream>
using namespace std;

class mahasiswa{
public:
int nim;
string nama;
float nilai;

void print_data(){
    cout << "NIM = " <<nim << endl;
    cout << "NAMA = " <<nama << endl;
    cout << "NILAI = " <<nilai << endl;   
    }
};

int main(){
    mahasiswa mhs;
    mhs.nim = 2024;
    mhs.nama = "Radiva Galih";
    mhs.nilai = 80,55;

    mhs.print_data();
};