#include <iostream>
using namespace std;

class baseClass{
    public:
        virtual void perkenalan() final{
            cout << "Halo saya Function dari baseClass :V";
        }
};

class deviredClass : public baseClass{
    public:
        void perkenalan1(){
            cout << "Hello i'm Function dari deviredClass, lol.";
        }
};

int main(){
    deviredClass a;
    a.perkenalan1();

    return 0;
}