#include <stdio.h>

int bulanRataRataPenjualanTertinggi(int T[3][4], int N, int M) {
    int max = 0, sum, i, j, IX;
    float mean = 0.0;
    for (i = 0; i < N; i++) {
        sum = 0;
        for (j = 0; j < M; j++) {
            sum += T[j][i];
            } 
        if (mean < (float)sum / N) {
                IX = i;
            }
        }
    return IX;
    }

int main() {
    int data_penjualan[3][4] = {{10, 15, 10, 5}, {20, 25, 20, 15}, {10, 5, 14, 3}};
    if (bulanRataRataPenjualanTertinggi(data_penjualan, 3, 4) == 0) {
        printf("Januari");
    } else if (bulanRataRataPenjualanTertinggi(data_penjualan, 3, 4) == 1) {
        printf("Februari");
    } else if (bulanRataRataPenjualanTertinggi(data_penjualan, 3, 4) == 2) {
        printf("Maret");
    } else if (bulanRataRataPenjualanTertinggi(data_penjualan, 3, 4) == 2) {
        printf("April");
    }
    return 0;
}