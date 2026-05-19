#include <iostream>
using namespace std;

class AbstraksiKlass{
    private:
        string x;
        string y;
    public:
        //method untuk mengisi nilai private member
        void setXY(string a, string b){
            x = a;
            y = b;     
        }
        //menampilkan nilai
        void display(){
            cout << "x = " << x << endl;
            cout << "y = " << y << endl;
        }
};

int main(){
    AbstraksiKlass ak;
    ak.setXY("NewYork", "Campus");
    ak.display();

    return 0;
}