#include <stdio.h>
#include <stdlib.h>


// inisialisasi enum dapat dilakukan diluar atau di dalam program utama 
enum hari {Senin = 1, Selasa = 2, Rabu = 3, Kamis = 4, Jumat = 5, Sabtu = 6, Minggu =7};
// defaultnya konstanta di dalam enum dimulai dari 0, tapi kita dapat mengubahnya dengan memberikan = (sama dengan) angka yang kita mau

int main (){

     /*
          Enum atau Enumeration merupakan tipe data yang berisi sekumpulan konstanta. Enum termasuk dalam tipe data bentukan, 
          karena tipe data ini dibuat sendiri oleh kita yang berguna untuk membaca kode yang kita buat.

          struktur enum:
          enum nama_enum {konstanta1, konstanta2,...}
     */

    enum hari hari_ini = Senin; // inisialisasi variabel dengan tipe data enum hari lalu beri nilai jika sudah mengetahui nilainya

    if (hari_ini == Sabtu || hari_ini == Minggu ){
         printf ("\nWaktunya liburan\n\n");
    }
    else{
         printf ("\nWaktunya kerja\n\n");
    }

     return 0;
}