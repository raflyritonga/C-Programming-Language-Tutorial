#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// deklarasi struct
struct Mahasiswa {

     char Nama[10];
     char NIM[10];
     double IPK;

};

int main (){

     /* Struct adalah jenis tipe data terstruktur yang berisi beberapa data, yang masing-masing dapat berlainan tipe data
     namun masih saling berkaitan. Sehingga struct mirip dengan sebuah payung besar yang di bawahnya ada tipe data-data lain
     Structs sangat mirip dengan class pada bahasa pemrograman lainnya, hanya saja tidak menggunakan method
     */

    // memanggil struct pada program utama. tulikan dulu nama struct-nya yang diikuti dengan nama variabel struct tersebut di program utama
    struct Mahasiswa mahasiswa1; // artinya adalah variabel mahasiswa1 bertipe struct Mahasiswa
    struct Mahasiswa mahasiswa2; 

     // memasukkan nilai ke dalam struct
    strcpy(mahasiswa1.Nama,"Budi"); // kita membutuhkan karakter titik untuk mengakses data-data yang ada di dalam struct Mahasiswa melalui variabel mahasiswa1
    strcpy(mahasiswa1.NIM,"21104234");
    mahasiswa1.IPK = 3.89;
    
    strcpy(mahasiswa2.Nama,"Rani"); 
    strcpy(mahasiswa2.NIM,"21104239");
    mahasiswa2.IPK = 3.9;

     // Menampilkan output struct
    printf("Nama mahasiswa 1: %s\n", mahasiswa1.Nama);
    printf("NIM mahasiswa 1: %s\n", mahasiswa1.NIM);
    printf("IPK mahasiswa 1: %.2lf\n\n", mahasiswa1.IPK);

    printf("Nama mahasiswa 2: %s\n", mahasiswa2.Nama);
    printf("NIM mahasiswa 2: %s\n", mahasiswa2.NIM);
    printf("IPK mahasiswa 2: %.2lf\n", mahasiswa2.IPK);

     return 0;
}