/*Nama File     : bilInteger.c*/
/*Deskripsi     : mengetahui apakah suatu bilangan integer negatif atau nol atau positif*/
/*Pembuat       : 24060124130062-Muhammad Dimas Arya Putra*/
/*Tgl Pembuatan : 26 Februari 2025 - 13:34*/

#include <stdio.h> /*Header File*/

/*Program Utama*/
int main()
{ /*Kamus*/
  int bilInteger;
  scanf("%d", &bilInteger);
  /*Algoritma*/
  if (bilInteger < 0) 
  {
    printf("Bilangan Bulat Negatif");
  }
  else if (bilInteger == 0)
  {
    printf("Nol");
  }
  else /*bilInteger > 0*/
  {
    printf("Bilangan Bulat Positif");
  }
  return 0;
}