/*Nama File     : gayaSentr.c*/
/*Deskripsi     : menghitung gaya sentripetal berdasarkan massa, kecepatan, dan jari-jari yang dimasukkan pengguna.*/
/*Pembuat       : 24060124130062-Muhammad Dimas Arya Putra*/
/*Tgl Pembuatan : 1 Maret 2025 - 14:51*/

#include <stdio.h> /*Header File*/

/*Program Utama*/
int main()
{ /*Kamus*/
    float m, v, r;
    printf("Massa (kg): ");
    scanf("%f", &m);
    printf("Kecepatan (meter per detik): ");
    scanf("%f", &v);
    printf("Jari-jari (meter): ");
    scanf("%f", &r);
    float F;
  /*Algoritma*/
    F = m * (v * v / r);
    printf("Hasil: %f", F);
}