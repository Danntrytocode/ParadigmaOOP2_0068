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

class Pelajar : virtual public Orang{};
class Ucup : public Pekerja, public Pelajar{};