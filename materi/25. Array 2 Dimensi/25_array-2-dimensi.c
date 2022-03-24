#include <stdio.h>
#include <stdlib.h>


int main (){

     /*
     Array dua dimensi adalah sebuah array dimana di dalamnya berisi array lagi. array 2 dimensi biasanya digunakan untuk membuat matriks atau tabel

     sintaks:
     int angka [maksimum kolom yang bisa ditampung/sumbu x, ini tidak wajib diisi dengan angka][maksimum banyak elemen dalam satu baris yang bisa ditampung/sumbu y, ini wajib diisi dengan angka] = {{isi array pertama}, {isi array kedua}}
     */

    // Inisialisasi array 2 dimensi dengan nilai yg sudah ditentukan
    int angka [][3] = {{1,2,3},{4,5,6}};

    /*
    Apabila ditampilkan ke layar maka hasilnya
    1 2 3 
    4 5 6

     angka 1 berada di posisi index [0][0], 
     angka 2 berada di posisi index [0][1],
     angka 3 berada di posisi index [0][2],

     angka 4 berada di posisi index [1][0], 
     angka 5 berada di posisi index [1][1],
     angka 6 berada di posisi index [1][2],
    */

   // Inisialisasi array 2 dimensi dengan nilai diinput user
   int angka2 [2][2]; // kali ini pada maksimum kolom yang bisa ditampung/sumbu x wajib diisi

   angka2 [0][0] = 10;
   angka2 [0][1] = 11;

   angka2 [1][0] = 12;
   angka2 [1][1] = 13;

   // cara 1:  menampilkan array 2 dimensi (wajib menggunakan nested loop) 

   for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
             printf ("%d ", angka2[i][j]);
        };
       printf ("\n");
        };
        

   // cara 2:  menampilkan array 2 dimensi (wajib menggunakan nested loop) tapi kini lebih dinamis

     int baris = sizeof(angka)     /    sizeof(angka[0]); // gunakan index
//               ukuran array angka     ukuran dari baris pertama 
     int kolom = sizeof(angka[0])            /    sizeof(angka[0][0]);
//               ukuran dari baris pertama        posisi dimana angka pertama kali ditembukan

     // printf("%d\n",baris);
     // printf("%d",kolom);

     printf("\n\n");
     for (int i = 0; i < baris ; i++){
          for (int j = 0; j < kolom; j++){
               printf ("%d ", angka[i][j]);
          };
          printf ("\n");
          };

     // array dan array 2 dimensi memang sedikit rumit, maka seringlah berlatih dan melihat berbagai sumber lainnya untuk mendapatkan penjelasan yang lebih lengkap 

     return 0;
}