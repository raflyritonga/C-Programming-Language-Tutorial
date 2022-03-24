#include <stdio.h>
#include <stdlib.h>

int main (){

     /*
          Array adalah sebuah variabel yang dapat menyimpan banyak nilai di dalamnya tapi masih satu tipe data.
          Array diibaratkan sebagai sebuah lemari, lalu di dalamnya ada laci (index).
          sementara nilainya akan di simpan di dalam laci-laci tadi. 
          selain itu, index juga berguna untuk memanggil nilai yang tersimpan di dalam laci lemari. dan index selalu dimulai dai 0.

          Menginisialisasi array mirip dengan inisialisasi variabel, dalam menginisialisasikannya pun terdapat beberapa cara
     */

    //INSIALISASI ARRAY

     // cara 1:  inisialisasi array dengan nilai yang telah ditentukan programmer
          int daftar_umur [] = {14,15,16,17,18,19}; 
          // index               0  1  2  3  4  5


     // cara 2: inisialisasi array dengan nilai merupakan inputan pengguna
          double daftar_nilai [5]; // kita perlu menginisialisasikan ukuran maksimal nilai yang bisa ditampung di dalam array.
          // sekaligus menjadi index juga. ditulis 5 tapi ukuran maksimalnya adalah 6 karena index dimulai dari 0 

          daftar_nilai [0] = 78.9; 
          daftar_nilai [3] = 90.8;
          /* memasukkan nilai ke array, jangan lupa untuk menginisialisasikan index agar program tahu nilai ini akan
          akan disimpan di index ke berapa. 0 artinya nilai ini akan disimpan di dalam array yang bernama daftar_nilai pada index/laci ke 0.  
          tidak masalah apabila ada index yang kosong, hanya saja tentu index tersebut tidak bisa ditampilkan di layar. kalaupun bisa hasilnya adalah 0 */

     // cara 3: inisialisasi array dengan sebagian nilai ditentukan programmer dan sebagian lagi dari inputan user
          double ipk [10] = {3.79,3.4,2.8,3.9,3.19};
          // index            0    1   2   3   4  
          // inisialisasi ukuran maksimal yang berlebih dengan sebagian index telah diisi oleh programmer sebagian lagi dapat dimasukkan oleh pengguna
          ipk [5] = 4.0;
          

     // MENAMPILKAN NILAI DI DALAM ARRAY

    // cara 1: kita bisa langsung mengeluarkan nilainya dengan menggunaanformat specifier seperti biasa
          printf ("umur siswa: %d tahun\n", daftar_umur[3]);
          printf ("Nilai kamu: %.2lf\n", daftar_nilai[0]);
          printf ("IPK kamu: %.2lf\n", ipk[4]);

          printf ("\n\n");

    // cara 2: kita bisa menampilkan nilai array dengan menggunakan perulangan loop dengan menginisialisasikan batas 
    //         perulangannya sebesar batas maksimum nilai yang ditampung pada array
          for (int i = 0; i < 10; i++)
          {
               printf ("IPK siswa %d: %lf\n",i,ipk[i]); // [i] atau index i dimaksudkan untuk memanggil nilai array sesuai dengan pergerakan index perulangan
          }
     // kelemahan cara kedua adalah ketika kita mau batas tampung maksimum array menjadi di atas 10 maka tidak dapat 
     // ditampilkan dengan cara ini karena pada perulangannya telah kita deklarasikan batas perulangannya adalah 10
          
     // cara 3: dengan cara ini program lebih dinamis dan apabila  batas tampung maksimum array ditambah berapa banyak pun 
     // tidak akan menjadi masalah. menampilkannya dengan masih menggunakan perulangan for
     printf ("\n\n");

          for (int i = 0; i < sizeof(daftar_umur)/sizeof(daftar_umur[0]); i++){
          printf ("Umur siswa: %d\n",daftar_umur[i]);
          }
          
          /* sizeof() merupakan sebuah fungsi yang berguna untuk menghitung ukuran bytes dari sebuah elemen. dan karena tipe data di dalam array
           sama, kita dapat membagikan ukuran bytes array  dengan ukuran bytes per index nilai untuk mendapatkan total berapa buah nilai di dalam sebuah array. selanjutnya kita print nilainya dengan menggunakan index i, agar index beregerak sesuai dengan perulangannya
          */

         // sebagai contoh
          printf ("%d bytes", sizeof(daftar_umur)); // hasilnya adalah 24, dimana kita memiliki 6 nilai dengan tipe data int, itu berarti per satu nilai nya memakan memori 4 byte.
          // tiap tipe data menggunakan total memori yg berbeda pula, kamu bisa lihat pembahasan tipe data untuk lebih lengkapnya


    return 0;


}