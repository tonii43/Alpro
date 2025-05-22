#include <stdio.h>
#include <string.h>

int indexBulan(char bulan[]) {
    char dataBulan[4][10] = {"Januari", "Februari", "Maret", "April"};
    int i, IX = -1;
    for (i = 0; i < 3; i++) {
        if (strcmp(bulan, dataBulan[i]) == 0) {
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

int main() {
    int i, j, max;
    char bulan[20];
    int data_penjualan[3][4] = {{10, 15, 10, 5}, {20, 25, 20, 15}, {10, 5, 14, 3}};
    int *penjualanBulan;

    printf("Nama bulan: \n");
    scanf("%s", &bulan);

    penjualanBulan = data_penjualan[indexBulan(bulan)];

    max = maxTabel(penjualanBulan, 3);
    if (max == 0)
    {
        printf("Semarang");
    }
    else if (max == 1)
    {
        printf("Jakarta");
    }
    else if (max == 2)
    {
        printf("Yogyakarta");
    }

    return 0;
}