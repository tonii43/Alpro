/*Nama File     : CekSegitiga.c*/
/*Deskripsi     : mencari bentuk segitiga berdasarkan 3 input sisi*/
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
  if (a <= 0 || b <= 0 || c <= 0) {
    printf("Terdapat nilai yang bukan sisi segitiga");
  }
  else if (a == b && b == c) {
    printf("Segitiga Sama Sisi");
  }
  else if (a == b || b == c || b == c) {
    printf("Segitiga Sama Kaki");
  }
  else /*a != b && b != c && a != c*/{
    printf("Segitiga Sembarang");
  }
  return 0;
}