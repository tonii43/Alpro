#include <stdio.h>

int T[5];
int *P;

void luasPersegi(int sisi, int* luas) {
    *luas = sisi*sisi;
}

// Prosedur
void helloWord() {
    printf("Hello, World\n");
}

// Prosedur Input Output
void tukar(int*a, int*b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
// Fungsi
int tambah(int a, int b) {
    return a + b;
} 

int main() {
    
    int a, b;
    helloWord();
    int c;
    luasPersegi(3, &c);
    printf("%d\n", c);
    a = 10;
    b = 5;
    printf("Nilai sebelum ditukar a = %d, b = %d\n", a, b);
    tukar(&a, &b);
    printf("Setelah ditukar a = %d, b = %d\n", a, b);
    printf("%d", tambah(a, b));

    return 0;
}