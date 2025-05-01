/*Nama File     : FaktorBil.c*/
/*Deskripsi     : Menentukan dan menampilkan faktor-faktor dari bilangan N yang dimasukkan oleh pengguna.*/
/*Pembuat       : 24060124130062-Muhammad Dimas Arya Putra*/
/*Tgl Pembuatan : 9 Maret 2025 - 22:00*/

#include <stdio.h> /*Header File*/

/*Program Utama*/
int main()
{ /*Kamus*/

  int N;
  printf("Jumlah N: ");
  scanf("%d", &N);

  /*Algoritma*/
    printf("Faktor bilangannya adalah ");
  for (int j = 1; j <= N; j++) {
    if (N % j == 0) {
        if (N == j) {
            printf("%d", j);
        } else {
            printf("%d, ", j);
        }
    }
  }
  return 0;
}