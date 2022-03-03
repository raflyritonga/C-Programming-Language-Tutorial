#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){   


     // menukar nilai antara dua variabel sangatlah berguna untuk melakukan penyortiran data dan pengurutan

     // UNTUK TIPE DATA CHAR, INT, DOUBLE, DLL

    // menukar variabel x bernilai X dan variabel y bernilai X
    char x = 'X';
    char y = 'Y';
    // untuk melakukannya kita memerlukan variabel bantu yang dinamakan variabel sementara (temporary variabel)
     char temp;
   // algoritma menukar value dua variabel
   temp   = x;      // pindahkan nilai x ke temp, otomatis nilai x menjadi kosong
   x      = y;      // pindahkan nilai y ke x, otomatis nilai y menjadi kosong
   y      = temp;   // pindahkan nilai temp ke y, akhirnya temp kembali ke posisi awal yakni tidak memiliki nilai apapun

   printf ("varibel x = %c\n", x);
   printf ("variabel y = %c", y);
   printf ("\n\n");


     // KHUSUS TIPE DATA STRING

    char a[15] = "HARIMAU";
    char b[15] = "IKAN";
    char temp2[15];
    // dianjurkan untuk menginisialisasikan batas maksimum karakter di dalam string agar program dapat berjalan dengan baik. 
    // jika tidak diinisialisasikan maka apabila nilai b memiliki karakter yang lebih sedikit daripada a maka output nya menjadi kosong karena sesuai dengan prinsip fungsi strcpy

 
   // algoritma menukar value dua variabel tipe data stirng
   strcpy(temp2,a);   // pindahkan nilai a ke temp2, otomatis nilai a menjadi kosong
   strcpy(a,b);      // pindahkan nilai a ke b, otomatis nilai b menjadi kosong
   strcpy(b,temp2);   // pindahkan nilai temp2 ke b, akhirnya temp2 kembali ke posisi awal yakni tidak memiliki nilai apapun

   printf ("varibel a = %s\n", a);
   printf ("variabel b = %s", b);



     return 0;
}