#include <iostream>
using namespace std;
 
class Mahasiswa{    //setter
    private:
        string nama;
        
    public:
        void setNama(string nama){
            this->nama = nama;
            
        }
};

int main(){
    Mahasiswa Mhs;
    
    Mhs.setNama("Min Yoongi");
}

class Mahasiswa{    //getter
    private:
        string nama;
        
    public:
        void setNama(string nama){
            this->nama = nama;
            
        }
        string getNama(){
            return nama;
        }
};

int main(){
    Mahasiswa Mhs;
    
    Mhs.setNama("Min Yoongi");
    cout<< Mhs.getNama();
}