/*Nama File 	  : tukar.c*/
/*Deskripsi 	  : Menukar nilai 2 buah variabel dengan prosedur*/
/*Pembuat   	  : 24060124130062 - Muhammad Dimas Arya Putra*/
/*Tgl Pembuatan	  : 7/4/2025 JAM 16.55*/

#include <stdio.h>

void tukar(int *a, int *b) {
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

int main() {
    int a, b;

    printf("Masukkan nilai a: ");
    scanf("%d", &a);
    printf("Masukkan nilai b: ");
    scanf("%d", &b);
    
    tukar(&a, &b);

    printf("%d, %d", a, b);
}