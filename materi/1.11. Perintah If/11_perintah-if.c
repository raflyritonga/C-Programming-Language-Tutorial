#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    /*
          Perintah if atau bisa juga disebut debagai percabangan
          digunakan dalam situasi untuk memilih salah satu
          pilihan apabila memenuhi kondisi yang telah dideklarasikan

          sintaks :

          if (kondisi1){
               perintah 1 yang dijalankan apabila kondisi 1 memenuhi. 
               di dalam if juga dapat kita masukkan if lagi yang mana nanti jadinya adalah nested if
          }
          else if (kondisi2){
               perintah 2 yang dijalankan apabila kondisi 2 memenuhi
          }
          else {
               perintah 3 yang dijalankan apabila tidak ada kondisi di atas yang memenuhi
          }
    */

   int umur;

   printf("\nMasukkan umur kamu:");
   scanf ("%d",&umur);

   if (umur <= 10 ){
        printf("Kamu anak-anak");
   }
   else if (umur >= 11  && umur <= 17 ){ // simbol && artinya DAN. akan dibahas pada materi oeprator logika
        printf ("kamu remaja");
   }
   else {
        printf("kamu dewasa");
   }

     return 0;
}