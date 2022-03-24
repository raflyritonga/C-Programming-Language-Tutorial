#include <stdio.h>

int main (){

     /* 
     Variabel : sebuah wadah yang dapat menyimpan nilai atau data dengan mengalokasikan memori untuk menyimpan nilai. 
     variabel dapat bernilai angka, tulisan, karakter, dan lain-lain.

     nilai dari sebuah variabel dapat diubah-ubah pada baris kode selanjutnya. namun hanya nilai terakhir yang diinisialisasikan yang akan dijalankan pada baris kode berikutnya

     Untuk membuat sebuah variabel kita butuh 2 langkah:
     1. deklarasi : 
          membuat variabel dengan sintaks tipe_data nama_variabel
     2. Inisialisasi :
          memberikan nilai pada variabel
     */

    //CONTOH VARIABEL
    int x; //deklarasi
    x = 21; //inisialisasi
    int y = 25; //deklarasi + insialisasi 
    y = 50; // mengganti nilai y menjadi 50 

     /*

     Konstanta adalah variabel yang nilainya tidak bisa dimodifikasi/atau diganti pada baris kode selanjutnya.

     contoh dari konstanta adalah nilai yang pasti, misalnya:
     pi = 3.14
     nama = Udin 

     Untuk membuat sebuah konstanta dapat digabungkan saja antara deklarasi dan inisialisasi nilai seperti format di bawah: 
     const tipe_data nama_konstanta = nilai

     */

     // CONTOH KONSTANTA
     const float PI = 3.14; // disarankan untuk penulisan nama konstanta menggunakna huruf besar semua agar membedakannya dengan variabel


     return 0;
}