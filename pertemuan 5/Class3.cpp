#include <iostream>
using namespace std;

class Mahasiswa{    //akses publik
    public:
        string nama, npm;
};

int main(){
    Mahasiswa Mhs;
    
    cin>> Mhs.nama;
    cin>> Mhs.npm;
    
    cout<< Mhs.nama << " " << Mhs.npm;
}

class Mahasiswa{    //menggunakan sebuah method
    public:
        string nama, npm;
        
        void Perkenalan(){
            cout<< "Nama: " << nama <<endl;
            cout<< "NPM: " << npm;
        }
};

int main(){
    Mahasiswa Mhs;
    cin>> Mhs.nama >> Mhs.npm;
    
    Mhs.Perkenalan();
}
