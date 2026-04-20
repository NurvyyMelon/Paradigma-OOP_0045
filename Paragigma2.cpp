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