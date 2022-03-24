#include <stdio.h>

int main (){

     FILE *p_File = fopen("asal.txt","r");
     char isi[255]; // variabel untuk menampung isi secara perbaris

     // memeriksa apakah file yang dituju ada atau tidak
     if (p_File == NULL){
          printf("File tidak ada!!!\n"); // apabila coba mengganti nama file atau ekstensinya, maka outputnya adalah ini
     }
     else{
          printf("ISI FILE: \n");
          // menampilkan semua isi file
          while (fgets(isi, 255, p_File) != NULL)
          {
               printf("%s", isi);
          }
     }

     /*
     menampilkan isi pada baris pertama saja
     fgets(isi, 255, p_File);
     printf("%s", isi);
     */


    

     fclose(p_File);

     return 0;
}