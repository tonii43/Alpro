#include <stdio.h>

// Fungsi untuk menghitung bulan berdasarkan jumlah angka tertentu
int hitung_bulan(int angka) {
    if (angka <= 0) return 0;
    return (angka / 3) + (angka % 3 != 0);
}

int main() {
    int angka[4];
    int bulan = 0;

    // Input angka
    for (int i = 0; i < 4; i++) {
        scanf("%d", &angka[i]);
        if (angka[i] < 0) angka[i] = 0; // Pastikan tidak ada angka negatif
    }

    // Hitung bulan untuk A
    bulan += hitung_bulan(angka[0]);
    
    // Hitung bulan untuk B dan C digabung
    bulan += hitung_bulan(angka[1] + angka[2]);
    
    // Hitung bulan untuk D
    bulan += hitung_bulan(angka[3]);
    
    printf("%d\n", bulan);
    return 0;
}
