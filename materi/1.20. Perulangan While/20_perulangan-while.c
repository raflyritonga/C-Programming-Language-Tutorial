#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){

     /*
      Perulangan while adalah sebuah perintah unutk melakukan perulangan kode. mirip dengan perulangan for hanya saja pada
       while batas akhirnya adalah sebuah kondisi, apabila kondisi tersebut benarmaka perulangan akan berhenti.
       dengan kata lain pada while memungkinkan kia untuk melakukan perulangan tiada henti/ tiada hitungan.

       namun while hanya bisa dipakai pada kondisi tertentu saja dan kita harus membuat sebuah skenario kondisi sebelum mendeklarasikan while
     */

    //program ini akan memaksa user menginputkan namanya, apabila tidak menginputkan nama maka program akan terus menerus mengulang

    char nama[30];

    printf("\nInput nama kamu: ");
    fgets (nama, 30, stdin); // akan dibahas pada episode berikutnya
    nama [strlen(nama) - 1] = '\0'; // akan dibahas pada episode berikutnya

     while (strlen(nama) == 0)
     {
          printf("Input tidak valid\n\n");
          printf("Input nama kamu: ");
          fgets (nama, 30, stdin); 
          nama [strlen(nama) - 1] = '\0';    

     }
     
    printf ("Selamat malam, %s!", nama);


     return 0;
}