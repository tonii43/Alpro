/*Nama File     : jarakGLBB.c*/
/*Deskripsi     : menghitung jarak yang ditempuh oleh benda dalam Gerak Lurus Berubah Beraturan (GLBB) berdasarkan kecepatan awal, waktu, dan percepatan yang dimasukkan pengguna.*/
/*Pembuat       : 24060124130062-Muhammad Dimas Arya Putra*/
/*Tgl Pembuatan : 26 Februari 2025 - 14:00*/

#include <stdio.h> /*Header File*/

/*Program Utama*/
int main()
{ /*Kamus*/
  int v0, t, a;
  printf("Kecepatan awal (meter per detik): ");
  scanf("%d", &v0);
  printf("Waktu (detik): ");
  scanf("%d", &t);
  printf("Percepatan (meter per detik kuadrat): ");
  scanf("%d", &a);
  int S;
  /*Algoritma*/
  S = v0 * t + (0.5 * a * t * t);
  printf("Hasil: %d", S);
}