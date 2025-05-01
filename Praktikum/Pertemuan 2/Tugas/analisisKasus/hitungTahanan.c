/*Nama File     : hitungTahanan.c*/
/*Deskripsi     : menjumlahkan jumlah tahanan dari 3 inputan*/
/*Pembuat       : 24060124130062-Muhammad Dimas Arya Putra*/
/*Tgl Pembuatan : 26 Februari 2025 - 13:34*/

#include <stdio.h> /*Header File*/

/*Program Utama*/
int main()
{ /*Kamus*/
  int a, b, c;
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  /*Algoritma*/
  if (a < 0 || b < 0 || c < 0) {
    printf("Masukan tahanan tidak boleh negatif");
  } else {
    printf("%d", a + b + c);
  }
  return 0;
}