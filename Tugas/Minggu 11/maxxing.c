#include <stdio.h>

int main () {
    int N;
    int i, max = -999;
    
    printf("Berapa N:\n");
    scanf("%d", &N);

    int TabInt[N];
    
    for (i = 0; i < N; i++) {
        printf("Nilai ke-%d :\n", i+1);
        scanf("%d", &TabInt[i]);
    }

    i = 0;

    while (i < N) {
        if (max < TabInt[i]) {
            max = TabInt[i];
        }
        i++;
    }
    printf("%d", max);
}