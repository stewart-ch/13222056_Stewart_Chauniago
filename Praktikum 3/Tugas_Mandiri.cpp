#include <iostream>

// Pembuatan class 
class RekeningBank {
private: // Private buat saldo (tipe double)
    double saldo;  // atribut private

public:
    // Constructor untuk melakukan pengisian saldo awal
    RekeningBank(double saldo_awal) {
        saldo = saldo_awal;
    }

    // Setor 
    void setor(double jumlah) {
        saldo += jumlah;
        std::cout << "Setor berhasil. Sisa saldo anda sekarang adalah:  " 
                  << saldo << std::endl;
    }

    //  tarik
    void tarik(double jumlah) {
        if (jumlah > saldo) {
            std::cout << "Penarikan Gagal" << std::endl;
        } 
        else {
            saldo -= jumlah;
            std::cout << "Penarikan berhasil. Sisa saldo: "
                      << saldo << std::endl;
        }
    }
};

int main() {
    // Inisialisasi saldo awal
    RekeningBank r1(100000);

    // Case Setor dan Tarik, (3 case)
    r1.setor(50000);
    r1.tarik(30000);
    r1.tarik(200000);

    return 0;
}