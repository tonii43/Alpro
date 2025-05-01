/*Nama File 	  : pesanRahasiaEga.c*/
/*Deskripsi 	  : Mendekripsi pesan yang dikirim untuk Ega sang penghancur dengan enkripsi caesar cypher*/
/*Pembuat   	  : 24060124130062 - Muhammad Dimas Arya Putra*/
/*Tgl Pembuatan	  : 7/4/2025 JAM 17.03*/

#include <stdio.h>

int hitungPanjang(const char *str) {
    int panjang = 0;
    while (str[panjang] != '\0') {
        panjang++;
    }
    return panjang;
}

int main() {
    int n;
    char pesan[101];

    scanf("%d", &n);
    scanf("%s", pesan);

    int len = hitungPanjang(pesan);

    for (int i = 0; i < len; i++) {
        char c = pesan[i];
        char asli = ((c - 'a' - n + 26) % 26) + 'a';
        printf("%c", asli);
    }

    printf("\n");

    return 0;
}
