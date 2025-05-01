/*Nama File     : KallSS.c*/
/*Deskripsi     : kalkulator simpel untuk mengoperasikan dua operand*/
/*Pembuat       : 24060124130062-Muhammad Dimas Arya Putra*/
/*Tgl Pembuatan : 1 Maret 2025 - 13:34*/

#include <stdio.h> /*Header File*/

/*Program Utama*/
int main()
{
    /* Kamus */
    int a, b;
    char op;

    /* Input */
    printf("Masukkan dua bilangan: \n");
    scanf("%d", &a);
    scanf("%d", &b);

    /* Menampilkan Menu */
    printf("Pilih operasi:\n");
    printf("a : iA + iB\n");
    printf("b : iA - iB\n");
    printf("c : iA * iB\n");
    printf("d : iA / iB\n");
    printf("e : iA div iB\n");
    printf("f : iA mod iB\n");

    /* Input operator */
    printf("Masukkan pilihan (a-f): ");
    scanf(" %c", &op); // Spasi sebelum %c agar tidak membaca newline

    /* Algoritma */
    if (op == 'a')
    {
        printf("Hasil: %d\n", a + b);
    }
    else if (op == 'b')
    {
        printf("Hasil: %d\n", a - b);
    }
    else if (op == 'c')
    {
        printf("Hasil: %d\n", a * b);
    }
    else if (op == 'd')
    {
        printf("Hasil: %lf\n", (float)a / b);
    }
    else if (op == 'e')
    {
        printf("Hasil: %d\n", a / b);
    }
    else if (op == 'f')
    {
        printf("Hasil: %d\n", a % b);
    }
    else
    {
        printf("Bukan pilihan menu yang benar\n");
    }
    return 0;
}
