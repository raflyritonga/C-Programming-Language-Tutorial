#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

     //deklarasi variabel dan konstanta
     const double PI = 3.14;
     double rad,luas,keliling; 

     // membuat tampilan awal
     printf ("\nProgram menghitung lingkaran\n");
     printf("Masukkan radius lingkaran (dalam cm): "); 
     scanf ("%lf",&rad);

     // inisialisasikan rumus ke dalam variabel
     luas = PI * rad * rad; 
     keliling = PI * 2 * rad;

     // menampilkan hasil
     printf ("Luas lingkaran: %.2lf cm\n",luas);
     printf ("Keliling lingkaran: %.2lf cm",keliling);

     return 0;
}