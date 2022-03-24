#include <stdio.h>
#include <stdlib.h>


int main (){

     /*
     Switch mirip dengan perintah If else hanya saja untuk switch lebih efisien dan kondisi yang dideklarasikan hanya bisa satu dan sederhana.
     artinya switch berguna untuk membandingkan satu kondisi tertentu dengan banyak kasus. 
     meski begitu, pada umunya programmer lebih sering menggunakan perintah if else karena jauh lebih fleksibel

     *agar dapat memahami perbedaan if dan switch dianjurkan
     untuk berlatih mandiri menggunakan perintah if else dan switch
     */

    char nilai;

    printf ("Nilai Ujian\n");
    
    printf ("Masukkan nilai ujian anda (A,B,C,D,E, atau F): ");
    scanf ("%c",&nilai);

    switch (nilai) // yang di dalma kurung merukapan variabel yang menyimpan sebuah kondsisi
    {
    case 'A': // kondisi pertama ketika variabel nilai memiliki nilai 'A'. dan begitu seterusnya
         printf ("hebat!"); // output jika variabel nilai memiliki nilai 'A'. dan begitu seterusnya
         break; // berguna untuk memisahkan perintah case 1 dengan case lainnya 
    case 'B':
         printf ("Bagus");
         break;
    case 'C':
         printf ("Cukup baik");
         break;
    case 'D':
         printf ("Tidak terlalu buruk");
         break;
    case 'E':
         printf ("Buruk");
         break;
    case 'F':
         printf ("Kamu gagal");
         break;
    
    default: // ini mirip dengan else, dimana jika nilai 
    // inputan tidak ada memenuhi kondisi, maka outputnya seperti dibawah ini:
          printf("Nilai yang anda masukkan tidak valid");
         break;
    }

     // catatan: case yang dideklarasikan hanya bisa satu ketentuan, kita tidak bisa menggunkan operator logika. 
     // sehingga program hanya bisa membaca inputan huruf yang berhuruf besar

     return 0;
}