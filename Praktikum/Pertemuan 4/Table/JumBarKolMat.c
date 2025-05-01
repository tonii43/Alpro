/*Nama File 	  : JumBarKolMat.c*/
/*Deskripsi 	  : Menjumlahkan setiap baris dan kolom pada matriks*/
/*Pembuat   	  : 24060124130062 - Muhammad Dimas Arya Putra*/
/*Tgl Pembuatan	  : 5/4/2025 JAM 23.23*/

#include <stdio.h>

int main() {
    int n, m, i, j;
    printf("\nMasukkan baris matrix = ");
    scanf("%d", &n);
    printf("\nMasukkan kolom matrix = ");
    scanf("%d", &m);
    int matrix[n][m];
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            printf("\nMasukkan elemen-elemen matrix = ");
            scanf("%d", &matrix[i][j]);
        }
    }
    for(i = 0; i < n; i++) {
        int sum = 0;
        for(j = 0; j < m; j++) {
            sum += matrix[i][j];
        }
        printf("Baris ke-%d ", i+1);
        for(j = 0; j < m; j++) {
            printf("%d", matrix[i][j]);
            if(j < m-1) {
                printf(" + ");
            }
        }
        printf(" = %d\n", sum);
    }
    for(j = 0; j < m; j++) {
        int sum = 0;
        for(i = 0; i < n; i++) {
            sum += matrix[i][j];
        }
        printf("Kolom ke-%d ", j+1);
        for(i = 0; i < n; i++) {
            printf("%d", matrix[i][j]);
            if(i < n-1) {
                printf(" + ");
            }
        }
        printf(" = %d\n", sum);
    }
    return 0;
}