#include <stdio.h>
#include <stdlib.h>
#include <time.h> // wajib menambahkan header file ini

int main (){

     /*
          pseudo random number adalah sebuah perintah semu (pseudo) untukmembuat angka acak
          dalam pembuatannya dapat menggunakan fungsi srand() dan/atau rand().

          srand() adalah seed random. seed adalah nilai integer yang akan digunakan sebagai benih oleh 
          algoritma generator angka pseudo-acak.
          ini berguna untuk membrikan benih kepada fungsi rand. secara default srand bernilai 1. 
          Serta jika kita ingin menghasilkan angka acak yang berbeda setiap kalo compiling program yang sama,  kita membutuhkan
          benih yang dapat dimasukkan parameter waktu sekarang (current time)

          rand() adalah random. dimana program akan mengacak angka (dari 0 - 32.767) tapi angka acaknya akan tetap sama setiap program yang sama di compile

     */

    time_t t;
    srand(time(&t)); // berguna untuk menandakan program yang berjalan di waktu saat ini, jika ini di hapus maka output nilai acaknya akan tetap sama
    int nilai = (rand() % 50) + 1; // % 10 untuk memberitahu batas maksimum angka acak.
                                // menginat perhitungan kompute di mulai dai 0, maka dapat kita ubah menjadi % 10 + 1 jika ingin batas akhir angka acaknya adalah 10
    printf("%d",nilai);
    

     return 0;
}