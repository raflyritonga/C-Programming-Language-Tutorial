#include <stdio.h>
#include <stdlib.h>

int perbandingan (int x, int y){

     // cara pertama (tanpa operator ternary)
          // if (x > y){
          //      return x;
          // }
          // else {
          //      return y;
          // }

     // cara dua (menggunakna operator ternary)
     return (x > y)? x : (y > x)? y : 0;
}

int main (){

     /*
      operator ternary adalah operator yang melibatkan 2 simbol yakni ? (tanda tanya) dan : (titik dua). 
      berguna untuk mempersingkat sintaks penulisan perintah if else dalam memasukkan/mengembalikan nilai.
      dimana ? berarti jika benar, dan : berarti atau/else.

      sintaksnya adalah 
      (kondisi) ? perintah jika benar : perintah jika salah

      kegunaannya liat pada fungsi perbandingan

     */

    int terbesar = perbandingan(10,10);
    printf ("nilai terbesar: %d", terbesar);


     return 0;
}