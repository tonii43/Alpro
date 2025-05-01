/*Nama File     : namaBulan.c*/
/*Deskripsi     : mengetahui bulan dari nomor bulan yang diinput*/
/*Pembuat       : 24060124130062-Muhammad Dimas Arya Putra*/
/*Tgl Pembuatan : 26 Februari 2025 - 13:34*/

#include <stdio.h> /*Header File*/

/*Program Utama*/
int main()
{ /*Kamus*/
  int namaBulan;
  scanf("%d", &namaBulan);
  /*Algoritma*/
  if (namaBulan < 1 || namaBulan > 12)
    {
      printf("Masukan nomor bulan tidak tepat.");
    }
  else
    {
    switch (namaBulan)
      {
        case 1:
          printf("Januari");
          break;

        case 2:
          printf("Februari");
          break;
        
        case 3:
          printf("Maret");
          break;

        case 4:
          printf("April");
          break;

        case 5:
          printf("Mei");
          break;

        case 6:
          printf("Juni");
          break;

        case 7:
          printf("Juli");
          break;

        case 8:
          printf("Agustus");
          break;

        case 9:
          printf("September");
          break;

        case 10:
          printf("Oktober");
          break;

        case 11:
          printf("November");
          break;
        
        case 12:
          printf("Desember");
          break;
      }
    }
  return 0;
}