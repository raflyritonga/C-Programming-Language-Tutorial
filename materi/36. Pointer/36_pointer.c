#include <stdio.h>

void tambah_skor (int *skor){
     
     *skor = *skor + 5; // mengelola referensi
     printf("setelah diubah: %d\n", *skor);

}

int main (){

     /*
          setiap kita mendeklarasikan sebuah variabel, maka otomatis variabel akan tersimpan ke dalam memori perangkat kita.
          Pointer adalah sebuah variabel yang menyimpan alamat memori variabel lain. 
          Alamat memori berfungsi untuk menentukan lokasi penyimpanan data pada memori (RAM). 
          Kadang alamat memori ini disebut reference atau referensi.

          apa yang perlu diketahui duluan:
          * (bintang/asterik) : berguna untuk membuat pointer
          & (dan)             : berguna untuk mengambil alamat memori (referensi) dari sebuah variabel 
          %p atau %x          : format specifier khusus untuk menampilkan referensi
     */

    // membuat variabel
          int umur = 20;
          double berat = 60.9;

     // membuat pointer  
          // tipe data hanya boleh int, double, dan float. string dan char tidak.
          int *p_umur = &umur; // &umur berguna untuk memasukkan referensi variabel ke dapat pointer p_umur
          double *p_berat = &berat;

     // mencetak alamat memori variabel 
          printf("alamat memori variabel umur: %p\n", umur);
          printf("alamat memori variabel berat: %p\n\n", berat);

     // mencetak referensi alamat memori yang terdapat di dalam pointer
          printf("referensi alamat memori variabel pointer p_umur: %d\n", p_umur);
          printf("referensi alamat memori variabel pointer p_berat: %d\n\n", p_berat);

     // mencetak alamat memori pointer
          printf("alamat memori *p_umur = %d\n", &p_umur);
          printf("alamat memori *p_berat = %d\n\n", &p_berat);

     // mencetak variabel menggunakan pointer
          printf("umur kamu: %d\n", *p_umur);
          printf("berat badan kamu: %.1lf\n\n", *p_berat);

     printf("---------------------------------------\n");
     printf("|   CONTOH KASUS: pass by reference   |\n");
     printf("---------------------------------------\n");

     /* contoh yang salah, karena output nya akan 0, karena yang dilakukan adalah mengoper nilai bukan alamat
          int skor = 0;
          printf("score awal: %d\n", skor);
          tambah_skor(skor); // fungsi tambah_skor ada di atas
          printf("score setelah ditambah: %d\n", skor);
     */

    // contoh benar
    int skor = 0;
          printf("skor awal: %d\n", skor);
          tambah_skor(&skor); // passing referensi variabel skor ke fungsi tambah_skor 
          printf("skor akhir: %d\n", skor);


     return 0;
}