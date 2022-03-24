#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> // include untuk mnegimport tipe data boolean 

int main (){


     /*
      Operator logika adalah operator yang berguna untuk membandingkan dua kondisi atau lebih
      operator logika umumnya ada 3, yakni:
      1. AND (&&)   : Hanya akan bernilai benar apabila kedua kondisi harus benar 
      2. OR (||)    : Akan bernilai benar apabila salah satu kondisinya sudah bernilai benar
      3. NOT (!)    : Hanya akan bernilai benar apabila kedua kondisinya salah (keblikan dari kondisi)

     */

    // contoh AND
     int x = -20;

     if (x >= 20 && x <= 30){ 
          // apakah x >= 20, iya. apakah x <= 30, iya. dengan begitu perintah ini dapat di jalankan
          // harus kedua kondisinya terpenuhi, baru bisa menjalankan perintah
          printf("cuaca hari ini cerah\n");
     }
     else if (x < 20 ){
          printf("cuaca hari ini dingin\n");
     }
     else{
          printf("cuaca hari ini panas\n");
     }


    // contoh OR
     x = -20;

     if (x >= 20 || x <= 30){ 
          //apakah x >=20, tidak. apakah x <=30, iya. dengan begitu perintah ini dapat di jalankan
          // artinya cukup satu kondisi saja yang terpenuhi, sudah bisa menjalankan program di bawahnya
          printf("cuaca hari ini cerah\n");
     }
     else if (x < 20 ){
          printf("cuaca hari ini dingin\n");
     }
     else{
          printf("cuaca hari ini panas\n");
     }

     // contoh NOT
       bool cerah = 1;

       // 1 ---> benar (true)
       // 0 ---> salah (false)

     if (!cerah){ 
          //logika NOT akan membalik nilai yang ada di dalam variabel cerah 
          printf("cuaca hari ini cerah\n");
     }
     else{
          printf("cuaca hari ini panas\n");
     }




     return 0;
}