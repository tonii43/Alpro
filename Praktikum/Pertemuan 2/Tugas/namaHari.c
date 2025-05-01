/*Nama File     : namaHari.c*/
/*Deskripsi     : mengetahui hari dari nomor hari yang diinput*/
/*Pembuat       : 24060124130062-Muhammad Dimas Arya Putra*/
/*Tgl Pembuatan : 26 Februari 2025 - 13:34*/

#include <stdio.h> /*Header File*/

/*Program Utama*/
int main()
{ /*Kamus*/
  int namaHari;
  scanf("%d", &namaHari);
  /*Algoritma*/
  if (namaHari < 1 || namaHari > 7)
  {
    printf("Masukan nomor hari tidak tepat.");
  }
  else
  {
    switch (namaHari)
    {
    case 1:
      printf("Senin");
      break;

    case 2:
      printf("Selasa");
      break;

    case 3:
      printf("Rabu");
      break;

    case 4:
      printf("Kamis");
      break;

    case 5:
      printf("Jum'at");
      break;

    case 6:
      printf("Sabtu");
      break;

    case 7:
      printf("Minggu");
      break;
    }
  }
  return 0;
}