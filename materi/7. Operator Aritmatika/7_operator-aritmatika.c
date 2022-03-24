#include <stdio.h>

int main (){

     // operator aritmatika adalah operator untuk melakukan sebuah operasi matematika. diantaranya:
     // jika ingin melakukan operasi bilangan maka hasilnya harus dikira-kira dulu apakah desimal atau bulat.

     // + (tambah)
          int x = 2;
          int y = 3;
          int z = x + y; // ini adalah variabel bantu untuk rumus
          printf("%d + %d = %d\n", x,y,z);

     // - (kurang)
          z = y - x;
          printf("%d - %d = %d\n",y,x,z);

     // * (kali)
          z = x * x;
          printf("%d x %d = %d\n",x,x,z);

     // / (bagi)
               // pembagian 2 bilangan bulat
               int a = 10;
               int b = 5;
               z = a / b;
               printf("%d / %d = %d\n",a,b,z);

               //pembagian dengan hasilnya bilangandesimal cara 1. 
               // bilangan pembagi dan variabelbantu rumus tipe datanya diubah
               int c = 5;
               float d = 2; // menggunakan tipe data float atau double
               float e = c /  d;
               printf("%d / %d = %f\n",a,b,e);

               //pembagian desimal cara 2. 
               // mengkonversi tipe data pada variabel bantu rumus yang bertipe data float atau double
               int f = 9;
               int g = 2;
               float h = f / (double) g; // tipe datanya dikonversi
               printf("%d / %d = %f\n",f,g,h); //gunakan escape sequences jika ingin mempersingkat nol dibelakang koma

     // % (modulus : mencari nilai sisa bagi)
          z = y % x;
          printf("%d mod %d = %d\n",y,x,z); // hasilnya 1 karena 3 / 2 sisa 1.

     
      /*
          Selain itu juga terdapat operator perbandingan yang
          digunakan untuk membandingkan dua nilai atau kondisi. diantaranya :

          1. < (kecil dari)
          2. > (besar dari)
          3. <= (kecil sama dengan)
          4. >= (besar sama dengan)
          5. == (sama dengan)
          6. != (tidak sama dengan)

          operator ini banyak digunakan pada perintah percabangan (if)
          
     */

     return 0;
}