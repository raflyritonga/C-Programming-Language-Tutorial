#include <stdio.h>
#include <stdlib.h>
#include <string.h> // wajib menggunakan include ini pada head file

int main()
{

     /*
      Fungsi string adalah sekumpulan perintah yang digunakan untuk mengolah string. fungsi string ada banyak, namun yang umum dipakai adalah:
      1. strlwr(nama variabel)                     -- membuat string menjadi huruf kecil semua
      2. strupr(nama variabel)                     -- membuat string menjadi huruf besar semua
      3. strcat(nama-variabel1, nama-variabel2)    -- perintah untuk concate (menyambungkan/menggabungkan) dua buah string menjadi satu
      4. strcmp(nama-variabel1, nama-variabel2)    -- membandingkan string 1 dan string 2 yang akan mengembalikan nilai 0 jika isinya sama
      5. strcpy(nama-variabel1, nama-variabel2)    -- mengkopi string 2 ke string 1
      6. strrev(nama-variabel1)                    -- membalik string
      7. strlen(nama-variabel1)                    -- menghitung jumlah karakter di dalam variabel
     */

     char string1[] = "Saya";
     char string2[] = "Budi";

     strlwr(string1);
     printf("%s\n", string1);

     strupr(string1);
     printf("%s\n", string1);

     strcat(string1, string2);
     printf("%s\n", string1);

     
     if(strcmp(string1, string2) == 0){
          printf("nilai string sama\n");
     }
     else{
          printf("nilai string berbeda\n");
     }

     strcpy(string1, string2);
     printf("%s\n", string1);

     strrev(string1); // nilai string satu telah menjadi budi karena ada fungsi strcpy di atas
     printf("%s\n", string1);

     printf("%d\n", strlen(string1));


     // masih banyak lagi fungsi string yang bisa dipakai, silakan cari tahu sendiri di google untuk penjelasan lebih detailnya
     return 0;
}