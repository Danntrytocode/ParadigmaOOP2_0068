#include <iostream>
using namespace std;

class remoteLampu{
    private: 
        string saklarNO[10];
    public:
        void setSaklarNO(int i, string value){
            saklarNO[i] = value;
        }
        string getSaklarNo(int i){
        return saklarNO[i];
    }
};

int main(){
    remoteLampu HomeLamp;

    HomeLamp.setSaklarNO(0, "Lampu Teras Rumah");
    HomeLamp.setSaklarNO(1, "Lampu Ruang Tamu");
    HomeLamp.setSaklarNO(2, "Lampu Kamar ");
    HomeLamp.setSaklarNO(3, "Lampu Dapur ");
    HomeLamp.setSaklarNO(4, "Lampu Kandang Ayam");

}