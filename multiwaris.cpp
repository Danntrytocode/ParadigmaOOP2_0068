#include <iostream>
using namespace std;


class Orang {
    public:
        int Umur;
        Orang (int pUmur) :
            Umur(pUmur){
            cout << "Orang dibuat dengan umur " << Umur << "\n" << endl;
        }
};

class Pekerja : virtual public Orang {
    public:
        Pekerja(int pUmur) : Orang(pUmur){
            cout << "Pekerja dibuat\n" << endl;
        } 
};

class Pelajar : virtual public Orang{
    public:
    Pelajar(int pUmur) : Orang(pUmur)
    {
        cout << "Pelajar dibuat\n" << endl;
    }
};

class Ucup : public Pekerja, public Pelajar{
    public:
    Ucup(int pUmur) :
        Pekerja(pUmur),
        Pelajar(pUmur),
        Orang(pUmur)        //hal ini dapat dilakukan jika menggunakan virtual
    {
        cout << "Budi dibuat\n" << endl;
    }
};

int main(){
    Ucup a(12);

    return 0;
}