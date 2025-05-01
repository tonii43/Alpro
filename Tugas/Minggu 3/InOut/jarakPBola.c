/*Nama File     : JarakPBola.c*/
/*Deskripsi     : mencari jarak bola dari titik awal hingga waktu yang ditentukan*/
/*Pembuat       : 24060124130062-Muhammad Dimas Arya Putra*/
/*Tgl Pembuatan : 1 Maret 2025 - 14:30*/

#include <stdio.h> /*Header File*/

/*Program Utama*/
int main()
{ /*Kamus*/
  int v0, t;
  int g = 10;
  printf("Kecepatan awal (meter per detik): ");
  scanf("%d", &v0);
  printf("Waktu (detik): ");
  scanf("%d", &t);
  int y;
  /*Algoritma*/
  y = v0 * t - 0.5 * (g * t * t);
  printf("Hasil: %d", y);
}