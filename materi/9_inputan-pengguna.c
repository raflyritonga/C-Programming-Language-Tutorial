#include <stdio.h>
#include <string.h> // mengimpor fungsi string, akan dibahas pada materi pada string functions
#include <stdlib.h> // stdlib = standard library. menginmpor library/package yang ada di dalam bahasa C


int main (){

     // untuk mendapatkan input dari pengguna kita dapat menggunakan perintag scanf dan fgets.
     // scanf hanya dapat menerima input  huruf, angka,simbol, dan tidak dapat menerima spasi (untuk satu kata)
     // fgetes dapat menerima input  huruf, angka,simbol, dan juga spasi (untuk kalimat)

     int umur; //deklarasi variabel tempat input pengguna disimpan nanti
     char nama [50]; // untuk string kita wajib mendeklarasikan berapa jumlah maksimalnya. pada variabel ini maksimalnya adalah 50 karakter 
     char kuliah [100];

     printf ("\nSiapa nama kamu:");
     scanf ("%s",&nama);
     fgetc (stdin); // akan dibahas lebih lanjut pada materi string functions

     printf ("asal kampus:");
     fgets(kuliah, 100, stdin); // kuliah itu variabel, 
                              // 100 itu kapasistas maksimal dari variabel kuliah,
                              // stdin (standart input) adalah fungsi 
     kuliah[strlen(kuliah)-1] = '\0'; // akan dibahas lebih lanjut pada materi string functions

     printf ("berapa umur kamu:");
     scanf ("%d",&umur); // %d disesuaikan dengan tipe data variabel. dan & wajib digunakan sebagai penunjuk alamat dari nama variabel

     
     printf("Halo %s,\n", nama); 
     printf("Umur kamu %d tahun\n", umur); 
     printf("Sekarang kuliah di %s", kuliah); 


     return 0;
}