#include <iostream>
#include <string>
using namespace std;

int main(){
    string nama;
    int hapus;
    cout << "Masukkan Nama : ";
    getline(cin,nama);
    cout << "Berapa banyak yang ingin dihapus? ";
    cin >> hapus;
    nama.erase(0,hapus);
    cout << "Hasil yang sudah dihapus : " << nama;
}