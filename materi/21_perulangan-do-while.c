#include <stdio.h>
#include <stdlib.h>


int main (){

     /*
          Do while sangat mirip dengan while. hanya saja, apabila while mengecek kondisi terlebih dahulu sebelum mengulang-ulang blok kode,
          pada do while akan menjalankan sekali blok kode terlebih dahulu lalu di cek apakah kondisi dari blok kode yang dijalankan pertama benar
          sesuai dengan kondisi yang tekah ditentukan. jika kondisinya sesuai maka perulangan do while akan berhenti
     */

    int angka = 0;
    int jumlah = 0;

     do {

          printf ("masukkan angka bilangan bulat poitif: ");
          scanf ("%d",&angka);
          if (angka > 0)
          {
               jumlah += angka; // jumlah = jumlah + angka
          }

     } while (angka > 0);

     printf("jumlah seluruh bilangan: %d",jumlah);

     return 0;
}