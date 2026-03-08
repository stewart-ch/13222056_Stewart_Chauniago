// Nama : Stewart Chauniago
// NIM : 13222056
#include <iostream>

int main() {  
    int nilai;  
    int sum = 0; // Nilai mula-mula untuk penjumlahan
    // for (looping dari 1 hingga 5)
    for (int i = 1; i <= 5; i++) {  
        std::cout << "Masukkan nilai ke-" << i << ": ";  
        std::cin >> nilai;
        // Dilakukan pengecekan apakah nilainya positif, negatif atau nol
        // Apabila negatif ataupun nol, maka tidak akan dijumlahkan ke sum
        // Tetapi jika nilainya merupakan nilai positif, maka nilai tersebut akan dijumlahkan ke sum
        if (nilai > 0) {
            std::cout << "Angka positif: " << nilai << std::endl;
            sum = sum + nilai;
        }
        else if(nilai < 0){
            std::cout << "Angka negatif: " << nilai << std::endl;
        }
        else {
            std::cout << "Angka nol " << nilai << std::endl;
        }
    }
    std::cout << "Total penjumlahan dari angka positif yang diberikan adalah: " << sum << std::endl;
    return 0;  
}