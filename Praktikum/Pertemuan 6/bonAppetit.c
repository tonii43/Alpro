#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i;
    int bulan = 0;

    int angka[4];

    for (i = 0; i < 4; i++)
    {
        scanf("%d", &angka[i]);
    } 

    for (i = 0; i < 4; i++) {
        if (angka[i] < 0) {
            angka[i] = 0;
        }
    }
    if (angka[0] % 3 == 0 && angka[1] % 3 == 0 && angka[2] % 3 == 0 && angka[3] % 3 == 0) {
        for (i = 0; i < 4; i++) {
            if (angka[i] % 3 == 0) {
                bulan += angka[i] / 3;
            }
        }
    } else {
        if (angka[0] <= 3 && angka[0] > 0) {
            bulan++;
        } else if (angka[0] > 0) {
            bulan += (angka[0] / 3) + 1;
        }
        if (angka[1] > 0 && angka[2] > 0) { 
            if ((angka[1] + angka[2]) % 3 == 0) {
                bulan += (angka[1] + angka[2]) / 3;
            } else {
                bulan += ((angka[1] + angka[2]) / 3) + 1;
            }
        }
            if (angka[1] == 0 && angka[2] != 0) {
                if ((angka[2] + angka[0]) % 3 == 0) {
                    bulan += (angka[2] + angka[0]) / 3;
                } else {
                    bulan += ((angka[2] + angka[0]) / 3) + 1;
                }
            } else if (angka[2] == 0 && angka[1] != 0) {
                if ((angka[1] + angka[3]) % 3 == 0) {
                    bulan += (angka[1] + angka[3]) / 3;
                } else {
                    bulan += ((angka[1] + angka[3]) / 3) + 1;
                }
            } else {
                if ((angka[0] + angka[3]) % 3 == 0) {
                    bulan += (angka[0] + angka[3]) / 3;
                } else {
                    bulan += ((angka[0] + angka[3]) / 3) + 1;
                }
            }
        }
        if (angka[3] <= 3 && angka[3] > 0) {
            bulan++;
        } else if (angka[3] > 0) {
            bulan += (angka[3] / 3) + 1;
        }
    }

    printf("%d", bulan);

    return 0;
}