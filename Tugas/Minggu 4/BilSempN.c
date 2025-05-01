/*Nama File     : BilSempN.c*/
/*Deskripsi     : Menampilkan semua bilangan sempurna hingga bilangan N yang dimasukkan oleh pengguna.*/
/*Pembuat       : 24060124130062-Muhammad Dimas Arya Putra*/
/*Tgl Pembuatan : 9 Maret 2025 - 23:32*/

#include <stdio.h> /*Header File*/

/*Program Utama*/
int main()
{ /*Kamus*/

  int N, jumlah, faktor, bilangan, count = 0;
  printf("Masukkan Bilangan: ");
  scanf("%d", &N);

  /*Algoritma*/
    if (N <= 0) {
        printf("N harus lebih besar dari nol");
    } else {
        printf("Bilangan Sempurnanya adalah ");
        bilangan = 1;
        while (bilangan <= N) {
            jumlah = 0;
            
            for (int faktor = 1; faktor < bilangan; faktor++) {
                if (bilangan % faktor == 0) {
                    jumlah += faktor;
                }
            }

            if (jumlah == bilangan) {
                if (count > 0) {
                    printf(", %d", bilangan);
                    bilangan++;
                } else {
                    printf("%d", bilangan);
                    count++;
                    bilangan++;
                }
            } else {
                bilangan++;
            }
        }
    }
    return 0;
}