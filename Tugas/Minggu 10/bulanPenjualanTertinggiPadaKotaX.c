#include <stdio.h>
#include <string.h>

int indexKota(char kota[])
{
    char dataKota[3][20] = {"Semarang", "Jakarta", "Yogyakarta"};
    int i, IX = -1;
    for (i = 0; i < 3; i++)
    {
        if (strcmp(kota, dataKota[i]) == 0)
        {
            IX = i;
        }
    }

    return IX;
}

int maxTabel(int T[], int N)
{
    int max = 0, i, IX;
    for (i = 0; i < N; i++)
    {
        if (T[i] >= max)
        {
            max = T[i];
            IX = i;
        }
    }

    return IX;
}


int main()
{
    int i, j, max;
    char kota[20];
    int data_penjualan[3][4] = {{10, 15, 10, 5}, {20, 25, 20, 15}, {10, 5, 14, 3}};
    int *penjualanKota;

    printf("Masukkan nama kota: \n");
    scanf("%s", &kota);

    penjualanKota = data_penjualan[indexKota(kota)];

    max = maxTabel(penjualanKota, 4);
    if (max == 0)
    {
        printf("Januari");
    }
    else if (max == 1)
    {
        printf("Februari");
    }
    else if (max == 2)
    {
        printf("Maret");
    }
    else if (max == 3)
    {
        printf("April");
    }

    return 0;
}