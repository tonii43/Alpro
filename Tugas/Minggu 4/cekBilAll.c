/*Nama File     : cekBilAll.c*/
/*Deskripsi     : Mengecek apakah suatu bilangan merupakan bilangan prima, bilangan sempurna, atau bilangan biasa.*/
/*Pembuat       : 24060124130062-Muhammad Dimas Arya Putra*/
/*Tgl Pembuatan : 9 Maret 2025 - 23:37*/

#include <stdio.h> /*Header File*/

/*Program Utama*/
int main()
{ /*Kamus*/

    int N, jumlah, jumlahFaktor;
    printf("Masukkan Bilangan: ");
    scanf("%d", &N);

    /*Algoritma*/
    jumlah = 0;
    jumlahFaktor = 0;
    for (int i = 1; i <= N; i++) {
        if (N % i == 0) {
            jumlahFaktor++;
        }
    }

    for (int i = 1; i < N; i++) {
        if (N % i == 0) {
            jumlah += i;
        }
    }
    
    if (jumlahFaktor == 2) {
        printf("Bilangan Prima");
    } else if (jumlah == N) {
        printf("Bilangan Sempurna");
    } else {
        printf("Bilangan Biasa");
    }
    return 0;
}