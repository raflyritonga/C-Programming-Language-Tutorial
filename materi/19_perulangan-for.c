#include <stdio.h>
#include <stdlib.h>

int main (){

     /*
      Perulangan for digunakan untuk melakukan perulangan kode untuk agar lebih menghemat penulisan.
      contoh kita ingin membuat urutan angka 1 sampai sepuluh, cara manual:
      printf("1\n");
      printf("2\n");
      printf("3\n");
      printf("4\n");
      printf("5\n");
      printf("6\n");
      printf("7\n");
      printf("8\n");
      printf("9\n");
      printf("10\n");

      tapi dengan perulangan for hanya bisa dilakukan dengan 4 baris kode, bahkan mau urutannya 1 sampai 1000 juga tetap 4 baris kodenya

     */

    for (int i = 1; i <= 10; i++) // untuk membuat perulangan for ada 3 argumen yang harus dimasukkan di dalam kurung
     //  index      batas    pola

     // index: berguna untuk menentukan batas awal perulangan, ingin dimulai dari berapa. 
          //   sintaksnya ditulis dulu tipe datanya (int) lalu nama index, umumnya menggunakan i, namun boleh juga diganti

     // batas: batas perulangan, sampai berapa perulangan tersebut akan dilakukan. 
          // i <=10 artinya perulangan akan dilakukan selama i lebih kecil sama dengan 10
     
     // pola: pola perulangan yang ingin dilakukan. umumnya ada increment (i++) artinya perulangan dari bilangan terkecil hingga terbesar, 
          // dan decrement (i--) artinya perulangan dari bilangan terbesar ke terkecil. dengan nilai i = bilangan terbesar, dan batas menjadi bilangan terkecil.
          // tapi bisa juga menggunkan perloncatan semimsal i+=2 (i = i+2) dan lain lain

     // secara keseluruhan argumen dapat dibaca menjadi : dengan index sama dengan 1, maka selama index lebih kecil sama dengan 10,
          //  maka lakukan perulangan kode di bawah ini dengan pola perulangan increment 
     
    {
         // didalam ini adalh perintah yang ingin diulang, bisa merupakan perintah yang lebih kompleks daripada ini 
         printf ("halo %d\n",i);
    }

     printf ("\n\n");

    for (int i = 10; i >= 1; i-- )
    {
         printf ("%d\n",i);   // apabila kode ini telah dijalankan sekali (i = 10), maka program akan kembali ke atas untuk mengecek indeks
                              // berikutnya menjadi (i = 9). begitu seterusnya sampai indeks menyentuh angka 1
    }

    // catatan: sering-seringlah latihan perulangan, agar terbiasa dengan logikanya

     return 0;
}