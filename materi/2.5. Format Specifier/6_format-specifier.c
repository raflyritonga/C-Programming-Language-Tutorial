#include <stdio.h>
#include <stdbool.h>

int main (){

     /*
     format specifier merupakan definisi dari sebuah tipe data yang berguna untuk memanggil sebuah tipe data yang ingin kita tampilakn ke layar

     Berikut adalah pasangan tipe data dengan format specifier-nya:
      %c = karakter
      %s = string (array of char) / char[]
      %f = float
      %lf = double
      %d = integer (int)

     Beberapa format tambahan lainnya:
      %.1 = menampilkan berapa angka dibelakang koma secara presisi
      %-  = rata kiri
      %1  = untuk mengalokasikan tempat sesuai dengan yang dideklarasikan

     */

     char kelas = 'A'; //petik satu
     char halo[] = "Halo";
     int harga = 30000;
     float IPK1 = 3.5;
     float IPK2 = 3.74;
     float IPK3 = 3.97;

     printf("%c\n",kelas);
     printf("%s\n",halo);
     printf("%d\n",harga);
     printf("IPK 1: %.2f\n",IPK1);
     printf("IPK 2: %10.2f\n",IPK2);
     printf("IPK 3: %-10.2f\n",IPK3);





     return 0;
}