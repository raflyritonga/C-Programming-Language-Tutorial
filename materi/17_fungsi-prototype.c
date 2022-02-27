#include <stdio.h>
#include <stdlib.h>

void menyapa (char nama[10], char hari[10]); // satu fungsi prototype untuk satu fungsi utuh


int main (){

     /*
      Sejatinya pada beberapa compiler kita tidak bisa mendeklarasikan fungsi setelah program utama, karena program 
      secara otomatis akan ngecek fungsi tersebut di atas program utama. namun untuk mengatasi itu, kita butuh fungsi prototype.

      selain itu fungsi prototype juga berguna mengecek terlebih dahulu apakah argumen yang kita lempar sesuai 
      dengan parameternya atau tidak. 
      jika tidak sesuai atau kurang atau lebih maka program error dan tidak akan di running sama sekali, jika sesuai maka program akan dijalankan normal

      hal ini penting karena pada beberapa compiler akan tetap menjalankan program sesuai dengan berapa pun argumennya yang cocok dengan parameter.
      sementara hal itu membuat programnya mengeluarkan output yang random dan kita susah mendetekesi error jika program kita panjang.

      pada dasarnya untuk menginisialisasikan fungsi prototype cukup dengan menuliskan:
      tipe_data_balikan_fungsi nama_fungsi (parameter) ----> ditulis sebelum program utama
      yang dilanjutkan setelah program utama dengan menulis fungsi lengkapnya 
     */

     char nama[10];
     char hari[10];

     printf ("\nNama kamu: ");
     scanf ("%s", &nama);
     printf ("Hari apa sekarang: ");
     scanf ("%s", &hari);
     
     menyapa (nama,hari);

     return 0;
}

void menyapa (char nama[10], char hari[10]){

     printf ("Halo %s, selamat hari %s\n\n", nama,hari);

}
