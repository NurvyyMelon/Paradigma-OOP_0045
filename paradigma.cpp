#include <iostream>
using namespace std;

class Mahasiswa{

public :
    int nim;
    string nama;
    float nilai;

    void printData(){
        cout << "NIM : " << nim << endl;
        cout << "Nama : " << nama << endl;
        cout << "Nilai : " << nilai << endl;
    }
}; //batas class

int main(){
    Mahasiswa mhs;
    mhs.nim = 2022;
    mhs.nama = "abra";
    mhs.nilai = 90.5;

    mhs.printData();
}

//TUGAS

#include <iostream>
using namespace std;

class Barang{

    public :
    string nama;
    int jumlah;
    string kategori;
    float tanggalproduksi;

    void printData(){
        cout << "Nama : " << nama << endl;
        cout << "Jumlah : " << jumlah << endl;
        cout << "Kategori : " << kategori << endl;
        cout << "Tanggal Produksi : " << tanggalproduksi << endl;
   }
}; //Batas dari method printdata

int main(){
    Barang barang1;
    barang1.nama = "Buku";
    barang1.jumlah = 10;
    barang1.kategori = "Non elektronik";
    barang1.tanggalproduksi = 2023-06-01;

    Barang barang2; 
    barang2.nama = "Laptop";
    barang2.jumlah = 1;
    barang2.kategori = "Elektronik";
    barang2.tanggalproduksi = 2023-05-15;

    barang1.printData();
    barang2.printData();

}




