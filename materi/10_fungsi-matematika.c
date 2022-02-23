#include <stdio.h>
#include <stdlib.h>
#include <math.h> // untuk mengimpor fungsi matematika di dalam bahasa C


int main (){

     // Fungsi matematika berguna untuk mengerjaan persoalan matematika yang lebih rumit.
     double a = sqrt (5); // mencari akar pangkat dari angka yang ada di dalam kurung
     printf ("%lf\n", a);

     double b = pow (2,3); // memangkatkan dua buah bilangan (x,y) di mana x diapngkatkan dengan y
     printf ("%lf\n", b);

     int c = floor (3.14); // membulatkan ke bawah angka di dalam kurung. wajib tipe datanya integer
     printf ("%d\n", c);
     int d = ceil (3.14); // membulatkan ke atas angka di dalam kurung. wajib tipe datanya integer
     printf ("%d\n", d);
     int e = round (3.14); // membuatkan ke bilangan bulat terdekat dari angka yang ada di daam kurung. tipe datanya wajib integer
     printf ("%d\n", e);


     double f = fabs (-100); // membuat nilai negatif menjadi positif
     printf ("%lf\n", f);

     double g = log(5); // menghitung logaritma dari angka yang ada di dalam kurung
     printf ("%lf\n", g);

     double h = sin (45); // mencari sinus dari bilangan di dalam kurung
     printf ("%lf\n", h); 
     double i = cos (45); // mencari cosinus dari bilangan di dalam kurung
     printf ("%lf\n", i);
     double j = tan (45);// mencari tangen dari bilangan di dalam kurung
     printf ("%lf\n", j);




     return 0;
}