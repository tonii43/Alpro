/*Nama File     : luasKelLayang.c*/
/*Deskripsi     : menghitung luas dan keliling layang-layang berdasarkan panjang sisi dan diagonal yang dimasukkan pengguna.*/
/*Pembuat       : 24060124130062-Muhammad Dimas Arya Putra*/
/*Tgl Pembuatan : 1 Maret 2025 - 15:10*/

#include <stdio.h> /*Header File*/

/*Program Utama*/
int main()
{ /*Kamus*/
  float s1, s2, d1, d2;

  printf("Sisi satu layang-layang (meter): ");
  scanf("%f", &s1);
  printf("Sisi dua layang-layang (meter): ");
  scanf("%f", &s2);
  printf("Diagonal satu layang-layang (meter): ");
  scanf("%f", &d1);
  printf("Diagonal dua layang-layang (meter): ");
  scanf("%f", &d2);

  float Luas, Kell;

  /*Algoritma*/

  Luas = 0.5 * d1 * d2;
  Kell = 2.0 * (s1 + s2);

  printf("Luas: %f\n", Luas);
  printf("Kell: %f", Kell);
}