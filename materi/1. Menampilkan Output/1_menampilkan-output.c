#include <stdio.h> /* #include berfungsi untuk mengimpor fungsi-fungsi yang sudah didefinisikan pada header file.
                    Header file adalah file yang berisi definisi fungsi yang sudah dibuat oleh developer.
                    Tujuannya agar bisa mempermudah penggunaan bahasa C.   */

int main () {  /* Bagian ini disebut sebagai fungsi utama (main function) yang di dalamnya 
                    terdapat baris-baris kode yang ingin kita jalankan.  */

// Penulisan kode dilakukan secara prosedural, artinya kita menuliskan code seraca berurut dari yang paling awal hingga akhir.

     printf("Halo dunia!\n"); 
     
     // printf adalah instruksi untuk menampilkan output ke layar

     /*
      ("halo dunia") merupakan sintaks yang digunakan unutk mendeklarasikan hal apa yang ingin ditampilkan ke layar 
      berupa apapun yang kita mau. ini diseut juga sebagai string literal, karena apa yang ingin ditampilkan ditulis secara 
      langsung bukan dimasukkan ke dalam variabel.
     */

     // \n adalah sebuah insturuksi untuk menampilkan output selanjutnya pada garis baru
     
     // titik koma merupakan perintah untuk mengahkiri sebuah instruksi dan lanjut ke instruksi selanjutnya.

     printf ("Aku\n");
     printf ("sayang\n");
     printf ("kamu\n\n");

     printf ("Membuat segitiga bintang secara manual\n");
     printf("*\n");
     printf("**\n");
     printf("***\n");
     printf("****\n");

     return 0; 
     /*
      pernyataan ini berguna untuk keluar dari program kita dan mengembalikan nilai 0 sekaligus ngecek 
      apakah ada error atau tidak. (pembahasan return pernyataan akan dibahas lebih lanjut pada file selanjutnya)
     */
}
