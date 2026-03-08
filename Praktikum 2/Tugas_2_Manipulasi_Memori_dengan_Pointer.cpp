#include <iostream>
// Membuat fungsi untuk kuadrat
void kuadratkan (int *nilai) {
    // Kuadrat = nilai dikali dengan nilai itu sendiri
    *nilai = (*nilai) * (*nilai);
}

int main(){
    int angka = 5; // Deklarasi variabel angka
    std::cout << "Nilai yang digunakan: " << angka << std::endl;
    // Panggil fungsi kuadrat
    kuadratkan(&angka);
    std::cout << "Nilai setelah dikuadratkan: " << angka << std::endl;
}