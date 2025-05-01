/*Nama File 	  : NilMax2Tabel.c*/
/*Deskripsi 	  : Program ini mencari nilai maksimum kedua dalam sebuah tabel (array).*/
/*Pembuat   	  : 24060124130062 - Muhammad Dimas Arya Putra*/
/*Tgl Pembuatan	  : 25/3/2025 JAM 20.09*/

#include <stdio.h>

int main() {
    // Kamus
    int N, P[N], maxTabel, max2Tabel;

    // Algoritma
    maxTabel = 0;
    max2Tabel = 0;

    printf("Masukkan nilai panjang tabel: ");
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        printf("Masukkan nilai ke-%d: ", i + 1);
        scanf("%d", &P[i]);
    }

    for (int i = 0; i < N; i++) {
        if (P[i] > maxTabel) {
            max2Tabel = maxTabel;
            maxTabel = P[i];
        } else if (P[i] > max2Tabel && P[i] < maxTabel) {
            max2Tabel = P[i];
        }
    }
    printf("Nilai maksimum ke-2 dari Tabel adalah %d", max2Tabel);

    return 0;
}