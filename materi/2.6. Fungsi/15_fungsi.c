#include <stdio.h>
#include <stdlib.h>

/*
     Fungsi adalah sebuah blok program di luar program utama yang berguna untuk 
     menyelesaikan sebuah perintah khusus dan dapat dipakai berulang kali.

*/

// CONTOH FUNGSI 1 -- Pengenalan fungsi
void halo (){ 
     /*
     ini adalah contoh inisialisasi fungsi. 
     Void artinya fungsi tersebut tidak mengembalikan nilai apapun ke program utama.
     halo adalah nama fungsi

     penting diingat, jika kita mendeklarasikan variabel di dalam fungsi maka yang mengetahui variabel tersebut hanya fungsi itu saja. hal itu lah yang dinamakan dengan variabel lokal (begitu pun pada program utama).
     sehingga untuk mengirimkan data di dalam variabel tersebut kita butuh parameter dan argumen.
     */

     printf("Halo dunia\n");

}

// CONTOH FUNGSI 2 -- Parameter dan argumen 
void menyapa (char nama[10], char hari[10]){

     /*
      di dalam fungsi juga terdapat parameter, yang gunanya menambil inputan yang dilempar oleh program utama (argumen)
      dengan adanya parameter dapat membuat fungsi yang lebih kompleks.

      penulisan parameter harus diikuti juga dengan tipe data parameter di depan namanya, karena sejainya parameter 
      itu adalah variabel yang berguna untuk menyampung data operan dari program utama

      parameter ditulis di dalam kurung setelah nama fungsi. Nama parameter dapat sama dengan nama argumen atau boleh juga beda.
      yang perlu diperhatikan adalah tipe data parameter harus sama dengan tipe data argumen, dan urutannya pun juga harus sama      
     */
     printf ("Halo %s, selamat hari %s\n\n", nama,hari);

}




// PROGRAM UTAMA

int main (){

     halo(); // ini adalah unutk memanggil fungsi. wajib sertakan tanda () agar dapat terhubung dengan fungsi yang telah dideklarasikan di atas

// ----------------------------------------------------------------------------------------------------------------------

     char nama[10];
     char hari[10];

     printf ("\nNama kamu: ");
     scanf ("%s", &nama);
     printf ("Hari apa sekarang: ");
     scanf ("%s", &hari);
     
     menyapa (nama,hari); // ini adalah perintah argumen. deklarasikan nama fungsinya, lalu di dalam kurung masukkan argumennya.
     // argumen dan perameter dapat lebih dari 1 

// ----------------------------------------------------------------------------------------------------------------------

     double sisi;
     printf ("masukkan panjang sisi persegi (dalam cm): ");
     scanf ("%lf", &sisi);
     // cara 2: masukkan argumen ke dalam variabel lagi, lalu panggil variabel tadi di printf
     printf ("luas persegi : %.2lf cm", luaspersegi (sisi)); // cara 1

// ----------------------------------------------------------------------------------------------------------------------

     return 0;

     // perlu diingat bahwa sebenarnya program utama adalah fungsi juga. diawali dengan tipe nilai balikan (return) int dan diakhiri dengan return 0. 
     // hal ini berguna untuk memberitahu jika program error, maka return nya menjadi 1 di terminal
}

