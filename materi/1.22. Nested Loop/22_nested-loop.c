#include <stdio.h>
#include <stdlib.h>

int main (){
     // nested loop adalah sebuah perulangan di dalam perulangan
     

     int ukuran;

     printf ("\nProgram membuat segitiga bintang\n");
     printf ("Masukkan ukuran segitiga: ");
     scanf ("%d",&ukuran);


     for (int i= 1; i <= ukuran; i++){ // pertama i = 1, maka kode dibawahnya dijalankan. dengan batas akhir ukuran. misalkan ukuran = 5
          for (int j = 1; j <= i; j++) // di sini j = 1 juga, maka kode di bawahnya di jalankan. dengan batas akhir adalah i. maka j = 1 <= i = 1
          {
          printf("* "); // kode ini dijalankan. lalu di cek apakah bisa naik ke indeks berikutnya, ternyata batas indeks adalah 1.
                       // maka, keluar dari perulangan j. masuk ke perulangan i.
          }
               printf ("\n"); // dimana pada perulangan i cuma ada perintah untuk new line. maka dijalankanlah perintah new line
                              // setelah itu di cek lagi ke atas, apakah masih bisa ke indeks berikutnya. di sini batas indeks i adalah 5, maka indeks i yg tadinya 1 naik menjadi 2
                              // dan begitu selanjutnya, dimana perulangan j nanti memiliki batas 2 dan ngeprint bintang dua kali hingga seterusnya sampai perulangan i mencapai indeks batas.
     }

     // catatan : perbanyaklah latihan materi perulangan agar semakin terbiasa dengan logikanya 


     return 0;
}