#include <stdio.h> // ini adalah package yang menyimpan banyak fungsi dan argumen yang dapat kita gunakan. Tanpa menuliskan/mendeklarasikan package ini, kita tidak bisa ngoding dengan lancar


int main () { 
// Pada bagian ini disebut sebagai fungsi utama (main function) yang di dalamnya terdapat baris-baris code yang ingin kita jalankan. 
// Penulisan code dilakukan secara prosedural, artinya kita menuliskan code seraca berurut dari yang paling awal hingga akhir.

     printf("Halo dunia!\n"); 
     
     // printf adalah instruksi untuk menampilkan output ke layar
     // ("halo dunia") merupakan sintaks yang digunakan unutk mendeklarasikan hal apa yang ingin ditampilkan ke layar berupa apapun yang kita mau. ini diseut juga sebagai string literal, karena apa yang ingin ditampilkan ditulis secara langsung bukan dimasukkan ke dalam variabel.
     // \n adalah sebuah insturuksi untuk menampilkan output selanjutnya pada garis baru
     // titik koma merupakan perintah untuk mengahkiri sebuah instruksi dan lanjut ke instruksi selanjutnya.

     printf ("Aku\n");
     printf ("sayang\n");
     printf ("kamu\n\n");

     printf ("Membuat segitiga bintang manual\n");
     printf("*\n");
     printf("**\n");
     printf("***\n");
     printf("****\n");

     return 0; 
     // pernyataan ini berguna untuk keluar dari program kita dan mengembalikan nilai 0 sekaligus ngecek apakah ada error atau tidak. (pembahasan return pernyataan akan dibahas lebih lanjut pada file selanjutnya)
}