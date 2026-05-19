#include <iostream>
using namespace std;

class Seseorang{
    public:
        virtual void pesan() = 0;
        /*virtual void pesan(){
            cout << "Pesan Dari seseorang" << endl;
        }*/
};

class Ucup :public Seseorang{};
class Lia :public Seseorang{}: