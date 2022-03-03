#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){

     // Sebagaimana yang diketahui bahwa string merupakan array daripada karakter, lalu jika kita ingin membuat array string bagaimana?

     char nama[7][10] = {"Budi", "Andre", "Mamat", "Joni", "Indra"}; // inisialisasi array string menggunakan array dua dimensi 
          // kurung siku pertama menunjukkan elemen maksimum string yang dapat dimasukkan
          // kurung siku kedua menunjukkan berapa elemen/karakter yang bisa ditampung dalam satu elemen string

     // edit nilai di dalam array menggunakan fungsi string strcpy
     strcpy(nama[0],"Ibnu");

     // menambahkan nilai ke dalam array 
     strcpy(nama[6],"Yusuf");

     // input nilai ke dalam array
     printf ("masukkan nama kamu: ");
     gets(nama[5]);

     // menampilkan menggunakan perulangan for
     for (int i = 0; i < sizeof(nama)/sizeof(nama[0]); i++){
          printf ("%s\n", nama[i]);
     }

     return 0;
}