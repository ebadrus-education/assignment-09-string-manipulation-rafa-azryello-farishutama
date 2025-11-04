#include <iostream>
#include <string>
using namespace std;

int main(){
    string nama;
    cout << "Masukkan Nama : ";
    getline(cin,nama);
    string dicari;
    cout << "Bagian mana yang ingin dicari? ";
    getline(cin,dicari);
    int posisi = nama.find(dicari);
    cout << "Ditemukan di posisi ke-" << posisi << endl;

}