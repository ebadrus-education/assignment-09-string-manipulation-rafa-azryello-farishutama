#include <iostream>
#include <string>
using namespace std;

int main(){
    string nama;
    cout << "Masukkan Nama : ";
    getline(cin,nama);
    cout << "Panjang nama : " << nama.length() << endl;
    cout << "Panjang Nama (size) : " << nama.size();
}