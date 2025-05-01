#include <stdio.h>

void tukarInt(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

int cekGanjil(int angka)
{
    if (angka % 2 == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    int N, i, banyakSwap;

    scanf("%d", &N);

    int angka[N];

    for (i = 0; i < N; i++)
    {
        scanf("%d", &angka[i]);
    }

    do
    {
        banyakSwap = 0;
        for (i = 0; i < N - 1; i++)
        {
            if (cekGanjil(angka[i]) < cekGanjil(angka[i + 1]))
            {
                tukarInt(&angka[i], &angka[i + 1]);
                banyakSwap++;
            }
        }
    } while (banyakSwap);

    for (i = 0; i < N; i++)
    {
        printf("%d ", angka[i]);
    }

    return 0;
}