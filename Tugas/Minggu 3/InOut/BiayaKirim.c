/*Nama File     : BiayaKirim.c*/
/*Deskripsi     : menghitung biaya pengiriman berdasarkan berat barang dan jarak pengiriman yang dimasukkan pengguna.*/
/*Pembuat       : 24060124130062-Muhammad Dimas Arya Putra*/
/*Tgl Pembuatan : 1 Maret 2025 - 15:23*/

#include <stdio.h> /*Header File*/

/*Program Utama*/
int main()
{ /*Kamus*/
  int b, j;

  printf("Berat (kg): ");
  scanf("%d", &b);
  printf("Jarak (km): ");
  scanf("%d", &j);

  int bd /*Biaya dasar*/ = 10000;
  int bpg /*Biaya per kg*/ = 5000;
  int bpm /*Biaya per km*/ = 2000;

  int biaya_kirim;
  /*Algoritma*/
  biaya_kirim = bd + (bpg * b) + (bpm * j);
  printf("Hasil: %d", biaya_kirim);
}