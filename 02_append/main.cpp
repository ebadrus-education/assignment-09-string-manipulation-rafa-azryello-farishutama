#include <iostream>
#include <string>
using namespace std;

int main(){
    string nama1,nama2;
    cout << "Masukkan Nama pertama : ";
    getline(cin,nama1);
    cout << "Masukkan Nama Kedua : ";
    getline(cin,nama2);
    string hasilAppend = nama1.append(nama2);
    string hasilTambah = nama1 + nama2;

    cout << "Dengan Append : "<<hasilAppend<<endl;
    cout << "Tanpa Append : "<<hasilTambah;

}