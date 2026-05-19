#include <iostream>
using namespace std;


class Orang {
    public:
        int umur;
        Orang (int pUmur);
};
class Pekerja : virtual public Orang{};
class Pelajar : virtual public Orang{};
class Ucup : public Pekerja, public Pelajar{};