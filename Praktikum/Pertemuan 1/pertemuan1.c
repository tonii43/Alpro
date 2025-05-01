#include <stdio.h>

int main() {
    int panjang, lebar, hasil;
    printf("Masukkan panjang: ");
    scanf("%d", &panjang);
    printf("Masukkan lebar: ");
    scanf("%d", &lebar);
    hasil = panjang * lebar;
    printf("Jadi, hasil luasnya adalah = %d", hasil);
}