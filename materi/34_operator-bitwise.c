#include <stdio.h>
#include <stdlib.h>

int main (){

     /*
      operator bitwise adalah operator yang digunakan untuk mengoperasikan bit dan biner di dalam pemrograman.
      oeprator ini terbagi atas:
      &   = AND
      \   = OR
      ^   = XOR (Exclusive OR)
      <<  = shift left
      >>  = shift right
     */

    int a = 6;      // Biner 6     = 00000110
    int b = 12;     // Biner 12    = 00001100

    /* AND = kedua bilangan harus benar semua (1) lalu hasilnya akan benar (1). 
          6     = 00000110
          12    = 00001100
          hasil = 00000100 -----> 4
    */ 
   printf ("hasil dari 6 & 12 : %d\n", a & b);

    /* OR = apabila salah bilangan sudah bernilai benar (1) maka hasilnya akan benar (1). dan hasilnya akan benar juga bila kedua bilangan bernilai benar (1)
          6     = 00000110
          12    = 00001100
          hasil = 00001110 -----> 14
    */ 
   printf ("hasil dari 6 | 12 : %d\n", a | b);


    /* XOR = apabila kedua bilangan bernilai benar (1) atau keduanya bernilai salah (0), maka hasilkan akan salah (0).
             tapi apabila satu saja bilangannya bersifat benar(1) atau salah(0), maka hasilnya adalah benar (1)
          6     = 00000110
          12    = 00001100
          hasil = 00001010 -----> 10
    */ 
   printf ("hasil dari 6 ^ 12 : %d\n", a ^ b);

    /* << = geser dua angka ke kiri. caranya adalah dengan mengilangkan 2 angka paling kiri, dan menambahkan 2 angka di paling kanan. 
            angka yang ditambahkan hanya boleh angka 0

          contoh : 6 << 2
          6     = 00000110 (hapus 2 angka 0 di paling kiri, tambahkan 2 angak 0 di paling kanan)
          hasil = 00011000 -----> 24
    */ 
   printf ("hasil dari 6 << 2 : %d\n", a << 2);

    /* << = geser dua angka ke kanan. caranya adalah dengan mengilangkan 2 angka paling kanan, dan menambahkan 2 angka di paling kiri. 
            angka yang ditambahkan hanya boleh angka 0

          contoh : 12 >> 2
          12    = 00001100 (hapus 2 angka 0 di paling kanan, tambahkan 2 angak 0 di paling kiri)
          hasil = 00000011 -----> 3
    */ 
   printf ("hasil dari 6 >> 2 : %d\n", b >> 2);
     return 0;
}