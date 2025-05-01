/*Nama File     : CekBilSemp.c*/
/*Deskripsi     : Mengecek apakah suatu bilangan merupakan bilangan sempurna dan menampilkan jumlah faktor-faktornya.*/
/*Pembuat       : 24060124130062-Muhammad Dimas Arya Putra*/
/*Tgl Pembuatan : 9 Maret 2025 - 22:53*/

#include <stdio.h> /*Header File*/

/*Program Utama*/
int main()
{ /*Kamus*/

  int N, jumlah = 0, count = 0;
  printf("Masukkan Bilangan: ");
  scanf("%d", &N);

  /*Algoritma*/
    for (int i = 1; i < N; i++) {
        if (N % i == 0) {
            jumlah += i;
        }
    }
    if (jumlah == N) {
        printf("Bilangan Sempurna {jumlah faktor bilangannya ");
        for (int i = 1; i < N; i++) {
            if (N % i == 0) {
                if (count > 0) {
                    printf("+", i);
                }
                printf("%d", i);
                count ++;
            }
        }
        printf("=%d}", jumlah);
    } else {
        printf("Bukan Bilangan Sempurna {jumlah faktor bilangannya ");
        for (int i = 1; i < N; i++) {
            if (N % i == 0) {
                if (count > 0) {
                    printf("+", i);
                }
                printf("%d", i);
                count ++;
            }
        }
        printf("=%d}", jumlah);
    }
    return 0;
}