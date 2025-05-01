/*Nama File     : JumDeret.c*/
/*Deskripsi     : Menghitung jumlah deret bilangan dari 0 hingga N yang dimasukkan oleh pengguna.*/
/*Pembuat       : 24060124130062-Muhammad Dimas Arya Putra*/
/*Tgl Pembuatan : 1 Maret 2025 - 15:00*/

#include <stdio.h> /*Header File*/

/*Program Utama*/
int main()
{ /*Kamus*/

  int N;
  printf("Jumlah N: ");
  scanf("%d", &N);
  int i = 0;

  /*Algoritma*/

  for (int j = 0; j <= N; j++) {
    i += j;
  }

  printf("Hasil: %d", i);
}