#include <iostream>
using namespace std;

class baseClass {
    public:
        virtual void perkenalan(){
            cout << "Hallo saya Function dari baseClass";
        }
};

class baseClass1 {
    public:
        virtual void perkenalan(){
            cout << "Hallo saya Function dari baseClass satu";
        }
};

class deviredClass : public baseClass1{};