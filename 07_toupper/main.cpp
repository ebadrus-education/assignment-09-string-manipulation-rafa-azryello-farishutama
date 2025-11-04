#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
    string nama;
    cout << "Masukkan Nama : ";
    getline(cin,nama);

    for(int i=0;i < nama.length();i++){
        nama[i] = toupper(nama[i]);
    }
    cout << "Huruf besar: " << nama << endl;

    for (int i = 0; i < nama.length(); i++) {
        nama[i] = tolower(nama[i]);
    }
    cout << "Huruf kecil: " << nama << endl;


}