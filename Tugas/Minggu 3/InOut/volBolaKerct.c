/*Nama File     : volBolaKerct.c*/
/*Deskripsi     : mmenghitung setengah volume bola berdasarkan jari-jari yang dimasukkan pengguna.*/
/*Pembuat       : 24060124130062-Muhammad Dimas Arya Putra*/
/*Tgl Pembuatan : 1 Maret 2025 - 15:00*/

#include <stdio.h> /*Header File*/

/*Program Utama*/
int main()
{ /*Kamus*/

  float r;
  float PHI = 3.1415;

  printf("Jari-jari lingkaran (meter): ");
  scanf("%f", &r);

  float Vb, Vk;

  /*Algoritma*/

  Vb = (4.0 / 3.0) * (PHI * r * r * r);
  Vk = 0.5 * Vb;

  printf("Hasil: %f", Vk);
}