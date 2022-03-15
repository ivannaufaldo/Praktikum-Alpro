/*
Nama File : BiayaParkir.c
Deskripsi : Program untuk menentukan besarnya biaya
            parkir yang dihitung berdasarkan lamanya parkir
Nama : Ivan Naufaldo Yustisio
NIM : 24060119130080
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus
    int Biaya;
    int LamaParkir;

    //Algoritma
    printf("\n--------------Biaya Parkir--------------\n\n");
    printf(" Masukkan Lama parkir = ");
    scanf("%d",&LamaParkir);
    if(LamaParkir>0){
        Biaya=2000;
        if(LamaParkir>2){
            LamaParkir-=2;
            Biaya=(LamaParkir*500)+Biaya;
            printf("\n Biaya parkir = %d\n\n", Biaya);
        }
        else{
            printf("\n Biaya parkir = %d\n\n", Biaya);
        }
    }else{
        printf(" Masukkan untuk lama parkir kurang tepat\n\n");
    }
    printf("--------------Biaya Parkir--------------");
    return 0;
}
