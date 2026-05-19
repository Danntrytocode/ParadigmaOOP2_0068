/*Sebuah bank digital bernama "Bank Gibran Jaya" sedang mengembangkan sistem otomatisasi akhir bulan untuk 
memproses biaya administrasi pada berbagai jenis rekening nasabah. Saat ini, bank memiliki dua produk utama 
yaitu Rekening Syariah yang menerapkan prinsip bebas biaya admin (saldo tetap utuh) dan 
Rekening Konvensional yang secara otomatis memotong saldo nasabah sebesar Rp 15.000 setiap bulannya. 
Sistem ini dirancang menggunakan abstract base class bernama RekeningBank dengan pure virtual function potongAdmin, 
sehingga server bank dapat memproses semua jenis rekening secara fleksibel hanya menggunakan pointer dari base class. 
Seiring perkembangan bisnis, bank meluncurkan produk baru bernama Rekening Premium 
dengan aturan potongan yang dinamis berdasarkan jumlah saldo nasabah. 
Jika saldo akhir bulan nasabah berada di atas Rp 10.000.000, maka nasabah tersebut dibebaskan 
dari biaya admin, namun jika saldonya di bawah atau sama dengan Rp 10.000.000, 
maka sistem akan memotong saldo sebesar Rp 50.000. 
Anda diminta untuk membantu tim developer Bank Gibran Jaya mengimplementasikan kelas baru ini ke dalam arsitektur sistem yang sudah ada.*/
#include <iostream>
#include <vector>
using namespace std;

class RekeningBank{
    protected:
        string RekeningNasabah;
        string NamaNasabah;
        double Saldo;   //malaz pakai int
    public:
    RekeningBank(string noRek, string nama, double saldoAwal) 
        : RekeningNasabah(noRek), NamaNasabah(nama), Saldo(saldoAwal) {}

    //Pure Virtual Function
    virtual void potongAdmin() = 0;

    //Fungsf menampilkan informasi rekening
    virtual void tampilkanInfo() const {
        cout << "Nasabah: " << NamaNasabah << " | No. Rek: " << RekeningNasabah << "Saldo Akhir: Rp " << Saldo << endl;
    }
    //virtual destructor
    virtual ~RekeningBank() {}
};

class RekeningSyariah : public RekeningBank {
public:
    RekeningSyariah(string noRek, string nama, double saldoAwal)
        : RekeningBank(noRek, nama, saldoAwal) {}

    //Syariah: Bebas biaya admin (saldo tetap utuh)
    void potongAdmin() override {
        // Tidak ada pemotongan saldo
        cout << "[Syariah] " << NamaNasabah << ": Bebas biaya admin. Saldo tetap utuh.\n";
    }
};

class RekeningKonvensional : public RekeningBank {
public:
    RekeningKonvensional(string noRek, string nama, double saldoAwal)
        : RekeningBank(noRek, nama, saldoAwal) {}

    // Potongan tetap Rp 15.000 setiap bulan
    void potongAdmin() override {
        Saldo -= 15000;
        cout << "[Konvensional] " << NamaNasabah << ": Berhasil dipotong Rp 15.000.\n";
    }
};
//New Class
class RekeningPremium : public RekeningBank{};
