#include <stdio.h>

int main (){

     // Menulis file bermaksud untuk membuat sebuah file yang dapat disimpan di komputer user

     char isi [255]; // variabel yang digunakan untuk menyimpan isi file 
     FILE *p_File; // membuat pointer file

     p_File= fopen("test.txt", "a");    // membuka file. 
                                        // test.txt adalah filepath yang mau dibuka
                                        // "a" adalah mode atau parameter yang akan menentukan sifat file tersebut
/*
     Mode	     Arti	                                                  Jika File Tidak ada
     r	     Buka untuk dibaca	                                   return NULL.
     rb	     Buka untuk dibaca dalam binary.	                    return NULL.
     w	     Buka untuk ditulis	                                   Buat baru atau tulis ulang jika ada
     wb	     Buka untuk ditulis dalam binary	                    Buat baru atau tulis ulang jika ada
     a	     Buka untuk ditambahkan	                              Buat baru atau tulis ulang jika ada
     ab	     Buka untuk ditambahkan dalam binary	               Buat baru atau tulis ulang jika ada
     r+	     Buka untuk dibaca dan ditulis	                         returns NULL.
     rb+	     Buka untuk dibaca dan ditulis dalam binary	          returns NULL.
     w+	     Buka untuk ditulis dan dibaca	                         Buat baru atau tulis ulang jika ada
     wb+	     Buka untuk dibaca dan ditulis dalam binary	          Buat baru atau tulis ulang jika ada
     a+	     Buka untuk dibaca dan ditambahkan isinya	          Buat baru atau tulis ulang jika ada
     ab+	     Buka untuk dibaca dan ditambahkan isinya dalam binary  Buat baru atau tulis ulang jika ada
*/

     fprintf(p_File, "Halo saya siapa?"); // menuliskan pesan di dalam file.

     fclose(p_File); // menutup file

     // setelah itu akan ada file test.txt yang baru kita buat di folder penyimpanan yang sama dengan folder source code ini

     // menghapus file
     // remove("test.txt");

     return 0;
}