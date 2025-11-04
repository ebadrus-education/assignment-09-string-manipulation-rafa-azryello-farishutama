#include <iostream>
#include <string>
using namespace std;

int main(){
    string nama;
    int potongan;
    cout << "Masukkan Nama : ";
    getline(cin,nama);
    cout << "Berapa bagian yang anda ingin ambil?";
    cin>>potongan;
    string hasil = nama.substr(0,potongan);
    cout << "Nama : " << nama << endl;
    cout << "Jika hanya diambil " << potongan << " huruf awal : " << hasil;

}