#include <stdio.h>
#include <stdlib.h>

int main ()
{

     int rahasia = 6; // angka rahasia
     int tebak;     // menyimpan angka yang ditebak user 
     int tebakan = 0; // menyimpan berapa banyak user telah menebak
     int batasTebakan = 3; // berapa banyak kesempatan user untuk menebak
     int tebakanHabis = 0; // menyatakan bahwa user sudah tidak punya kesempatan untuk menebak lagi 

     while ( tebak != rahasia && tebakanHabis == 0){
          if (tebakan < batasTebakan){ // mengecek apakah tebakan user masih tersisa atau enggak 
               printf ("Masukkan angka: ");
               scanf ("%d", &tebak);
               tebakan++;
          }
               else {
                    tebakanHabis = 1; // untuk menyatakan bahwa tebakan sudah habis. menggunakan prinsip boolean. 0 untuk salah dan 1 untuk benar
               }
     }

     if (tebakanHabis == 1){
          printf ("Kamu kalah");
     }
          else 
          {
               printf ("kamu menang");
          }


     return 0;

}