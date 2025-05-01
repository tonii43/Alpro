/*Nama File 	: SimetriTabel.c*/
/*Deskripsi 	: memeriksa apakah 2 buah tabel itu simetri (panjang dan elemennya sama pada posisi yang sama)
/*Pembuat   	: 24060124130062 - Muhammad Dimas Arya Putra*/
/*Tgl Pembuatan	: 7/4/2025 - 14.45*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Kamus
    int N, i, k, j, apakahSimteri;

    // Algoritma
    printf("Masukkan panjang T1: ");
    scanf("%d", &N);
    int P1[N];

    for (i = 0; i < N; i++)
    {
        printf("Masukkan nilai ke-%d: ", i + 1);
        scanf("%d", &P1[i]);
    }

    printf("\n");

    printf("Masukkan panjang T2: ");
    scanf("%d", &N);
    int P2[N];

    for (i = 0; i < N; i++)
    {
        printf("Masukkan nilai ke-%d: ", i + 1);
        scanf("%d", &P2[i]);
    }

    printf("\n");

    apakahSimteri = 1;
    if (sizeof(P1) != sizeof(P2))
    {
        apakahSimteri = 0;
    }
    else
    {
        for (i = 0; i < N; i++)
        {
            if (P1[i] != P2[i])
            {
                apakahSimteri = 0;
                break;
            }
        }
    }

    if (apakahSimteri)
    {
        printf("T1 dan T2 simetri");
    }
    else
    {
        printf("T1 dan T2 tidak simetri");
    }

    return 0;
}