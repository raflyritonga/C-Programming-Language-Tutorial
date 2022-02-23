#include <stdio.h>

int main (){

     /*
     operator pemasukan (assignment) adalah operator yang dapat kita gunakan untuk menginisialisasikan 
     nilai ke dalam variabel menggunakan sama dengan (=).
     selain itu kita punya augmented assignment operators : berguna menjadi operator untuk mengembalikan 
     nilai statement ke dalam variabel yang sama. 
     contoh                 : x = x + 1
     dapat disingkat dengan : x +=1 
     */

    int a = 6;
    int b = a;
    int c = b;
    int d = c;
    int e = d;

    // a = a + 2
       a+=2;
    // b = b - 3
       b-=3;
    // c = c * 2 
       c*=2;
    // d = d / 2 
       d/=2;
    // e = e % 4 
       e%=4;

       printf("%d\n",a);
       printf("%d\n",b);
       printf("%d\n",c);
       printf("%d\n",d);
       printf("%d\n",e);

     return 0;
}