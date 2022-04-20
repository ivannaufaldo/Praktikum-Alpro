#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "Searching.h"

int main()
{
    //kamus
        int array[] = {1, 2, 5, -8, 12, 90, 3, 5, 12, 100, 31};
        int X = 3;
        int n = sizeof(array)/ sizeof(array[0]);
        int ix1;
        int ix2;
        bool Found;

    //Algoritma
        //tanpa boolean
        printf("\n---------------------Sequence Search 1---------------------\n");
        printf(" array:[ ", array);
        for( int a=0;a<n ;a++){
            printf("%d ", array[a]);
        }
        printf("] elemen array : %d\n elemen yang dicari %d\n",n,X);
        SEQSearchX1(array, n , &ix1, X);
        if(ix1<0){
            printf("Tidak ditemukan");
        }else{
            printf(" tanpa boolean elemen yang dicari ada di indeks ke %d\n", ix1);
        }

        /* menggunakan boolean
        SEQSearchX2(array, n ,X, &ix2, &Found);
        if(ix2<0){
            printf("Tidak ditemukan");
        }else{
            printf(" menggunkan boolean elemen yang dicari ada di indeks ke %d", ix2);
        }*/



    return 0;
}
