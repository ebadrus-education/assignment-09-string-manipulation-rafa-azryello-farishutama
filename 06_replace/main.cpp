#include <iostream>
#include <string>
using namespace std;

int main(){
    string nama,ganti;
    int awal,n;
    cout << "Masukkan Nama : ";
    getline(cin,nama);
    cout << "Mulai Darimana bisa dihapus? ";
    cin >> awal;
    cout << "Berapa karakter yang dihapus? ";
    cin >> n;
    cout << "Diganti dengan kata? ";
    cin.ignore();
    getline(cin,ganti);
    nama.replace(awal,n,ganti);
    cout << "Hasil : " << nama;

}