#include <stdio.h>
#include <stdbool.h> // untuk menggunakan tipe data boolean, kita wajib mendeklarasikan package ini

int main (){

     // tipe data digunakan untuk merepresentasikan sebuah nilai yang ada di dalam variabel/konstanta

     char a = 'C';            // menampung satu karakter saja                                                 (%c)
     char b[] = "Halo";       // kumpulan karakter/kata/kalimat/string                                        (%s)

     float c = 3.12345;       // untuk bilangan berkoma tapi kurang presisi. menampung 6-7 digit angka        (%f)
     double d = 3.12345;      // untuk bilangan berkoma dan lebih presisi. menampung 15-16 digit angka        (%lf)

     bool e = true;              // boolean: untuk menyatakan salah (0) atau benar (1) berdasarkan kode biner (%d)

     char f =120;             // menyimpan karakter menggunakan nilai kode ASCII nya (-128 sampai 127)        (%d) untuk mencetak ASCII atau (%c) untuk mencetak karakter             
     unsigned char g =120;    // menyimpan karakter menggunakan nilai kode ASCII nya (0 sampai 255)           (%d) untuk mencetak ASCII atau (%c) untuk mencetak karakter             

     short h = 2342;          // menyimpan bilangan bulat (-32,768 sampai 32,767)                             (%d)
     unsigned short i = 2342; // menyimpan bilangan bulat (0 sampai 65,535)                                   (%d)

     int j = 255342;            // menyimpan bilangan bulat (integer) (-2,147,483,648 hingga 2,147,483,647)     (%d)
     unsigned int k = 234322;   // menyimpan bilangan bulat (0 sampai 4,294,967,295.)                           (%d) atau (%u)

     long long int j = 2344532;            // menyimpan bilangan bulat  (-(2^63) sampai (2^63)-1 )                   (%lld) atau (%d)
     unsigned long long int k = 2343642;   // menyimpan bilangan bulat (0 sampai 18,446,744,073,709,551,615 )        (%llu) atau (%d)


     /*
          yang paling sering dipakai adalah char, char [], int, double, float, boolean
     */


     return 0;
}