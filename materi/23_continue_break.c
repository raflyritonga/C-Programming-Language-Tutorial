#include <stdio.h>
#include <stdlib.h>


int main (){

     /*
      Continue adalah sebuah perintah untuk menglangkahi atau skip blok kode yang ingin di jalankan di dalam perulangan
      Break adalah perintah untuk keluar dari perulangan. break juga dipakai pada switch 
     */

     for (int i = 1; i <= 15; i++){

          if (i == 5){
               continue; // pada indeks ke 5 program akan dilangkahi yang mengakibatkan nomor 5 tidak di print ke layar
          }
          if (i == 11){ // pada indeks ke 11 program akan berhenti dan tidak melanjutkannya sampai indeks batas sebagaimana yang telah ditentukan pada argumen
               break;
          }

          printf ("%d\n",i);
     }

     return 0;
}