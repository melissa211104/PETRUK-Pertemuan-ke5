#include <iostream>
using namespace std;

class Mahasiswa{ //tanpa parameter
    public:
        Mahasiswa(){ //constructor
             cout<<"Hello world";
        }
};

int main(){
    Mahasiswa Mhs;
}


class Mahasiswa{  //dengan parameter
    public:
        string nama, npm;
        
        Mahasiswa(string nama, string b){
            this ->nama = nama; //klo namanya sama pake tanda panah. atribut yg diisi parameter
            npm = b; //klo beda lgsg aja
        }
};

int main(){
    Mahasiswa Mhs("Melissa","2111");
    
    cout<< "Nama: " << Mhs.nama<< endl;
    cout<< "NPM: "<< Mhs.npm << endl;
}