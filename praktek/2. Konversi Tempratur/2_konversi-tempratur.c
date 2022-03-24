#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main (){

     int satuan;
     double k,f,c,r,nilai;
     bool ulang;

     awal:
     printf ("Selamat datang di program konversi suhu\n\n");

     printf("Pilihan satuan\n\n");

     printf(" |-------|-------------|\n");
     printf(" |  Kode | Satuan      |\n");
     printf(" |-------|-------------|\n");
     printf(" |  1    | Celsius     |\n");
     printf(" |  2    | Fahrenheit  |\n");
     printf(" |  3    | Reamur      |\n");
     printf(" |  4    | Kelvin      |\n");
     printf(" |-------|-------------|\n");

     printf("\nMasukkan kode satuan suhu yang ingin anda konversi: ");
     scanf ("%d",&satuan);

     system("cls");


     if (satuan == 1 ){

          printf ("masukkan suhu anda (dalam Celsius): ");
          scanf ("%lf",&nilai);

          k = nilai + 273.15;
          f = (nilai * 1.8) + 32;
          r = nilai * 0.8;

          system("cls");

          printf ("Suhu dalam satuan Kelvin: %.2lf\n",k);
          printf ("Suhu dalam satuan Fahrenheit: %.2lf\n",f);
          printf ("Suhu dalam satuan Reamur: %.2lf\n",r);

          sleep(2);

     }
     else if (satuan == 2){

          printf ("masukkan suhu anda (dalam Fahrenheit): ");
          scanf ("%lf",&nilai);

          k = (nilai + 459.67) / 1.8;
          c = (nilai - 32) / 1.8;
          r = (nilai - 32) / 2.25;

          system("cls");

          printf ("Suhu dalam satuan Kelvin: %.2lf\n",k);
          printf ("Suhu dalam satuan Celsius: %.2lf\n",c);
          printf ("Suhu dalam satuan Reamur: %.2lf\n",r);

          sleep(2);
     }
     else if (satuan == 3){

          printf ("masukkan suhu anda (dalam reamur): ");
          scanf ("%lf",&nilai);

          f = (nilai * 1.8) / 459.67;
          c = nilai - 273.15;
          r = (nilai - 273.15) * 0.8;

          system("cls");

          printf ("Suhu dalam satuan Fahrenheit: %.2lf\n",f);
          printf ("Suhu dalam satuan Celsius: %.2lf\n",c);
          printf ("Suhu dalam satuan Reamur: %.2lf\n",r);

          sleep(2);
     }
     else if (satuan == 4) {

           printf ("masukkan suhu anda (dalam kelvin): ");
           scanf ("%lf",&nilai);

          f = (nilai * 2.25) / 32;
          c = nilai / 0.8;
          k = (nilai / 0.8) + 273.15;

          system("cls");

          printf ("Suhu dalam satuan Fahrenheit: %.2lf\n",f);
          printf ("Suhu dalam satuan Celsius: %.2lf\n",c);
          printf ("Suhu dalam satuan Kelvin: %.2lf\n",k);

          sleep(2);
     }
     else{
          printf ("Input tidak valid");
     }
     
     printf("\nProgram selesai. Ingin mengulang?");
     printf("\n 0 ---> iya ");
     printf("\n 1 ---> tidak ");
     printf("\nMasukkan kode: ");
     scanf ("%d", &ulang);
    
     if (ulang == 0) {
          goto awal;
     }

     return 0;
}