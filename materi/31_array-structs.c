#include <stdio.h>
#include <stdlib.h>

struct Mahasiswa {

     char Nama[10];
     char NIM[10];
     double IPK;

};

int main (){

     // array struct berguna untuk menyimpan struct ke dalam array dengan tujuan codingan lebih rapi dan data yang disimpan bisa lebih banyak

     struct Mahasiswa mahasiswa1 = {"Budi", "0001", 3.7};
     struct Mahasiswa mahasiswa2 = {"Indah", "0002", 3.0};
     struct Mahasiswa mahasiswa3 = {"Anton", "0003", 3.8};

     // deklarasi array struct
     struct Mahasiswa daftar_mahasiswa[] = {mahasiswa1, mahasiswa2, mahasiswa3};

     for (int i = 0; i < sizeof(daftar_mahasiswa)/sizeof(daftar_mahasiswa[0]); i++)
     {
          printf ("%-5s\t",daftar_mahasiswa[i].Nama);
          printf ("%s\n",daftar_mahasiswa[i].NIM);
          printf ("%.2lf\n",daftar_mahasiswa[i].IPK);
     }
     
     return 0;
}