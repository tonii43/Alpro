#include <stdio.h>

int main()
{

    int N, NEff;
    int T[100];

    printf("Masukan N\n");
    scanf("%d", &N);
    printf("Masukkan Neff\n");
    scanf("%d", &NEff);

    for (int i = 0; i < N; i++)
    {
        printf("Masukan T[%d]\n", i);
        scanf("%d", &T[i]);
    }

    int j = NEff - 1;
    int i = 0;
    while (
        j >= 0)
    {
        T[N - j - 1] = T[i];
        T[i] = 0;
        i++;
        j--;
    }

    // done print hasil
    for (int i = 0; i < N; i++)
    {
        printf("T[%d] = %d\n", i, T[i]);
    }
    return 0;
}