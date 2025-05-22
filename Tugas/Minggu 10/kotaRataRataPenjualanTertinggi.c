#include <stdio.h>

int kotaRataRataPenjualanTertinggi(int T[3][4], int N, int M) {
    int max = 0, sum, i, j, IX;
    float mean = 0.0;
    for (i = 0; i < N; i++) {
        sum = 0;
        for (j = 0; j < M; j++) {
            sum += T[i][j];
            }
        if (mean < (float)sum / M) {
            mean = (float)sum / M;
            IX = i;
            }
        }
    return IX;
    }

int main() {
    int data_penjualan[3][4] = {{10, 15, 10, 5}, {20, 25, 20, 15}, {10, 5, 14, 3}};

    if (kotaRataRataPenjualanTertinggi(data_penjualan, 3, 4) == 0) {
        printf("Semarang");
    } else if (kotaRataRataPenjualanTertinggi(data_penjualan, 3, 4) == 1) {
        printf("Jakarta");
    } else if (kotaRataRataPenjualanTertinggi(data_penjualan, 3, 4) == 2) {
        printf("Yogyakarta");
    }
    return 0;
}