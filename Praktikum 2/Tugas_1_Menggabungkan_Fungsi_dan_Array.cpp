// Nama : Stewart Chauniago
// NIM : 13222056

#include <iostream>
// Membuat fungsi untuk hitung rata rata
double hitungRataRata (double arr[], int ukuran) {
    double jumlah = 0.0;
    for (int i = 0; i < ukuran; i++) {
        jumlah += arr[i]; // Melakukan penjumlahan
    }
    return jumlah / ukuran; // Menghitung nilai rata-rata
}
int main() {
    const int ukuran = 5; // Melakukan deklarasi ukuran array
    double nilai[ukuran] = {80.0, 90.0, 100.0, 92.5, 87.5}; // Array yang digunakan 
    double avg = hitungRataRata(nilai, ukuran); // Menghitung nilai rata-rata
    std::cout << "Nilai rata-rata dari array yang diberikan: " << avg << std::endl; // Menampilkan hasil
    return 0;
}