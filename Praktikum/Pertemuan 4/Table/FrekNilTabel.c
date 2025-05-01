/*Nama File 	  : FrekNilTabel.c*/
/*Deskripsi 	  : Menampilkan bilangan yang muncul lebih dari satu kali dalam sebuah tabel (array).*/
/*Pembuat   	  : 24060124130062 - Muhammad Dimas Arya Putra*/
/*Tgl Pembuatan	  : 25/3/2025 JAM 20.46*/

#include <stdio.h>

int main() {
    // Kamus
    int N, P[N], jumlah, duplikat;

    // Algoritma

    printf("Masukkan nilai panjang tabel: ");
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        printf("Masukkan nilai ke-%d: ", i + 1);
        scanf("%d", &P[i]);
    }

    printf("Bilangan yang muncul lebih dari 1 kali:\n");
    for (int i = 0; i < N; i++) {
        duplikat = 0;

        for (int k = 0; k < i; k++) {
            if (P[i] == P[k]) {
                duplikat = 1;
                break;
            }
        }

        if (duplikat) {
            continue;
        }

        jumlah = 0;

        for (int j = i; j < N; j++) {
            if (P[i] == P[j]) {
                jumlah++;
            }
        }

        if (jumlah > 1) {
            printf("%d\n", P[i]);
        }
    }

    return 0;
}