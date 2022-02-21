#include <stdio.h>

int main (){

     /*
     escape sequences adalah penulisan karakter yang tidak bisa diwakili secara langsung dalam penulisan karakter atau string literal untuk menjalankan fungsi tertentu yang biasanya diawali dengan backslash (\). bebraoa diantaranya yang sering dipakai adalah:

     \n        = untuk membuat baris baru
     \t        = untuk membuat tab
     "\...\"   = untuk membuat tanda petik dalam string literal
     dan masih banyak lag, bisa dicari di google ya :)
     
     */


    // Membuat baris baru
    printf("Indonesia\n");
    printf("Raya\n\n");

    //membuat Tab
    printf("1\t2\t3\n4\t5\t6\n\n");

    //membuat tanda petik
    printf("\"NKRI HARGA MATI!\" - Teriak anak muda itu");

    
    

     return 0;
}