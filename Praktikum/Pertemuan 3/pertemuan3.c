#include <stdio.h>

int main() {
    int i;
    scanf("%d", &i);
    for (int a = 1; a <= i; a++) {
        for (int b = 1; b <= i - a; b++) {
            printf(" ");
        }
        for (int c = 1; c <= (2 * a - 1); c++) {
            printf("*");
        }
        printf("\n");  
    }
}