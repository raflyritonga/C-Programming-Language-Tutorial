#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// deklaraasi typedef. nyatakan typedef, kemudian masukkan tipe data, kemudian nama variabel.
typedef char nama[10];

// typedef + struct
typedef struct data // nyatakan typedef yang diikuti dengan tipe data terstruktut struct, lalu nama struct nya, kemudian data struct.
{
     char nama[10];
     int umur;
     char password[10];
} data_pengguna; // nama typedef dituliskan pada akhir struct


int main (){

     // Typedef adalah perintah yang dipakai untuk memberikan nama lain dari tipe data yang berguna memudahkan programmer dalam
     // menulis kode dan mempersingkat kode pada program utama. Typedef biasanya digunakan secara bersamaaan dengan struct

     // memanggil typedef. tuliskan nama typedef nya, lalu nyatakan variabelnya.
     nama mahasiswa1 = "Budi";
     nama mahasiswa2 = "Ica";

     printf("Mahasiswa 1: %s\n",mahasiswa1);
     printf("Mahasiswa 2: %s\n\n",mahasiswa2);


     // memanggil typedef + struct
     data_pengguna pengguna1 = {"Indra", 19, "indra84"}; // ini adalah cara lain (cara singkat) untuk mengisikan data ke dalam struct
     data_pengguna pengguna2 = {"Lutfi", 26, "lufi123"};
          // dengan menggunakan typedef + struct, kita tidak perlu menuliskan struct lagi pada baris kode di program utama 

     printf ("%s\n",pengguna1.nama);
     printf ("%d\n",pengguna1.umur);
     printf ("%s\n\n",pengguna1.password);

     printf ("%s\n",pengguna2.nama);
     printf ("%d\n",pengguna2.umur);
     printf ("%s\n",pengguna2.password);

     return 0;
}