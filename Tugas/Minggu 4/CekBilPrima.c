/*Nama File     : CekBilPrima.c*/
/*Deskripsi     : Mengecek apakah suatu bilangan merupakan bilangan prima dan menampilkan faktor-faktornya.*/
/*Pembuat       : 24060124130062-Muhammad Dimas Arya Putra*/
/*Tgl Pembuatan : 9 Maret 2025 - 22:30*/

#include <stdio.h> /*Header File*/

/*Program Utama*/
int main()
{ /*Kamus*/

  int N, jumlahFaktor = 0, bilangan;
  printf("Masukkan Bilangan: ");
  scanf("%d", &N);

  /*Algoritma*/
    if (N < 0) {
        printf("Bukan Bilangan Prima {bilangan negatif}");
    } else if (N == 0) {
        printf("Bukan Bilangan Prima {bilangan nol}");
    } else if (N == 1) {
        printf("Bukan Bilangan Prima {faktor bilangannya adalah 1}");
    } else {
        for (int i = 1; i <= N; i++) {
            if (N % i == 0) {
                jumlahFaktor++;
            }
        }

    if (jumlahFaktor == 2) {
        printf("Bilangan Prima {faktor bilangannya adalah 1 dan %d}", N);
    } else {
        printf("Bukan Bilangan Prima {faktor bilangannya adalah 1");
        for (int i = 2; i <= N; i++) {
            if (N == i) {
                printf(" dan %d}", i);
            } else if (N % i == 0) {
                printf(", %d", i);
            }
        }
    }
    }
    return 0;
}