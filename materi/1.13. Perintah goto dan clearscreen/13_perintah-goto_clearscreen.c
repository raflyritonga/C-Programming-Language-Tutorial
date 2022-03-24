#include <stdio.h>
#include <stdlib.h>


int main (){

     /*
     Perintah goto diperuntukan untuk melakukan perloncatan baris
     baris program yang ingin dijalankan jika sudah mencapaikondisi tertentu. 
     perintah goto membutuhkan label sebagai penanda perloncatan

     clearscreen adalah perintah untuk membersihkan terminal agar labih mudah dibaca oleh programmer dan user.
     sintaks untuk perintah clearscreen ada 3:
     1. clrscr() - untuk compiler TurboC 
     2. system("cls") - untuk compiler TurboC 
     3. system("clear") - untuk compiler gcc/g++ di Linux
     kalian boleh mencoba ketiganya dan sesuaikan dengan conpiler yang kalian gunakan

     perintah goto dan clearscreen dapat dipakai bersama, bisa juga secara terpisah
     */

    char nilai;

     awal: // ini adalah bentuk inisialisai label 
     system ("cls");
    printf ("\nNilai Ujian\n");
    
    printf ("Masukkan nilai ujian anda (A,B,C,D,E, atau F): ");
    scanf ("%c",&nilai);

    system ("cls"); //sintaks untuk clearscreen, dimana nantinya
     //output di atas akan hilang semua dan dilanjutkan dengan output program di bawah ini

    switch (nilai) 
    {
    case 'A':
         printf ("hebat!"); 
         break; 
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
    
    default: 
          printf("Nilai yang anda masukkan tidak valid\n");
          goto awal; // ini adalah inisialisasi perintah goto. 
          // dimana ketika nilai yang dimasukka tidak valid, setelah mengeluarkan output tulisan di atas, program 
          // secara otomatis lompat (pergi ke) label awal yang diinisalisasikan di awal untuk mengulang program kembali.
         break;
    }

     return 0;
}

   
