#include <stdio.h>
#include <stdlib.h>

int main (){

     /*
      memori (memory):                  sebuah array bytes di dalam RAM yang berguna sebagai penyimpanan
      blok memori (memory block):       satu buah byte di dalam memori yang beguna untuk menampung nilai 
      alamat memori (memory adress):    alamat dimana blok momori itu berada di dalam memori

      analogi: Memori adalah sebuah komplek perumahan, blok memori adalah rumah-rumah yang ada di dalam komplek tersebut yang gunanya 
      bisa menjadi tempat tinggal manusia. sedangkan alamat memori adalah alamat rumah tersebut yang berada di dalam kompleks perumahan

      setiap tipe data menggunakan blok memori yang berbeda beda dan lokasinya pun beda-beda
     */

    char a = 'r'; // char menggunakan 1 blok memori
     printf("%d bytes\n", sizeof(a));
     printf("%p\n\n",&a); // ini adalah sintaks untuk menampilkan alamat memori seuatu variabel

    int b = 3253; // int menggunakan 4 blok memori
     printf("%d bytes\n", sizeof(b));
     printf("%p\n\n",&b); 

    float c = 325.3; // float menggunakan 4 blok memori
     printf("%d bytes\n", sizeof(c));
     printf("%p\n\n",&c); 

    double d = 3.253; // double menggunakan 8 blok memori
     printf("%d bytes\n", sizeof(d));
     printf("%p\n\n",&d); 

    char sapa[10] = "hai"; // string / array of char menggunakan blok memori sesuai dengan batas maksimumnya
     printf("%d bytes\n", sizeof(sapa));
     printf("%p\n\n",&sapa);

    int e[10] = {333}; // array of int menggunakan blok memori sesuai dengan batas maksimumnya (10) dikali dengan blok memori per satuan int (4). sehingga 10 x 4 =1 40 blok memori 
     printf("%d bytes\n", sizeof(e));
     printf("%p\n\n",&e);
     // begitupun untuk array of float, double, dan tipe data lainnya

     enum daftar_hari {senin, selasa, rabu}; 
     enum daftar_hari hari; // enum menggunakan 4 bytes yang mana itu sama seperti int, bersifat sangat mirip dengan int. dimana setiap elemen enum memiliki nilai int nya masing-masing
     printf("%d bytes\n", sizeof(hari));
     printf("%p\n\n",&hari);


     /*
     penulisan alamat memori menggunakan hexadesimal, untuk itu kita akan melihat ada kombinasi angka dan huruf. kamu boleh mencari tentang 
     hexadesimal pada sumber yang berbeda agar lebih mendapatkan penjelasan yang komprehensif
     */


     return 0;
}