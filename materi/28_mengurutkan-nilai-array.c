#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void pengurutan (int angka[], int ukuran){

     for (int i = 0; i < ukuran-1; i++){

          for (int j = 0; j < ukuran-1;j++){

               //algoritma pengurutan
               
               if (angka[j] > angka[j+1]){ // apabila nilai array angka index ke 0 lebih besar daripada index ke 1, maka pindahkan nilai index 1 ke kiri

                    int temp       = angka[j];
                    angka[j]       = angka[j+1];
                    angka[j+1]     = temp; 

               }
               
          }
     }

}

void print_array (int angka[], int ukuran){

     // menampilkan array yang tealh diurutkan 
     for (int i = 0; i < ukuran; i++){
          printf("%d ",angka[i]);
     }

}


int main (){

     // pada kali ini kita akan mengurutkan nilai array dari terkecil ke terbesar menggunakan pola bubble short
     
    int angka[] = {2,6,7,1,0,9,12};
    int ukuran = sizeof(angka)/sizeof(angka[0]);

    pengurutan(angka, ukuran);
    print_array(angka, ukuran);

    // algoritma ini tidak hanya berlaku untuk tipe data integer, tapi juga untuk double, float, char, dll. kecuali string
    
    return 0;
}