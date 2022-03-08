#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int main (){

     const MIN = 1;
     const MAKS = 25;
     int jawaban, tebakan;
     int daftar_tebakan = 0;

     srand(time(0)); // waktu sekarang juga dapat dituliskan seperti ini
     jawaban = (rand() % MAKS) + MIN; // membuat angka random sebagai jawaban

     printf ("\n\nPERMAINAN TEBAK ANGKA\n\n");

     do{
          printf("Masukkan angka tebakan anda: ");
          scanf ("%d",&tebakan);

          if (tebakan > jawaban){
               printf("Tebakan kamu terlalu tinggi\n");
          }
          else if (tebakan < jawaban){
               printf("Tebakan kamu terlalu rendah\n");
          }
          else{
               printf ("Tebakan kamu benar!\n\n");
          }
          daftar_tebakan++;

     }while (tebakan != jawaban);

     printf ("************\n");
     printf ("Jawaban %d\n", jawaban);
     printf ("Kamu berhasil pada percobaan ke-%d", daftar_tebakan);


     return 0;
}