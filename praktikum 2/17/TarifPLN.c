/*
Nama File : TarifPLN.c
Deskripsi : Program untuk menentukan besarnya Tarif PLN
Nama : Ivan Naufaldo Yustisio
NIM : 24060119130080
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus
    int GolonganTarif;
    int PemakaianListrik;
    int TarifPLN;

    //Algoritma
    printf("-------------Tarif PLN-------------\n\n");
    printf(" Daftar Golongan Tarif : \n");
    printf("  -Golongan 1 -> \n");
    printf("  -Golongan 2 -> \n");
    printf(" \n Masukkan Golongan Tarif = ");
    scanf("%d",&GolonganTarif);
    printf("Masukkan Pemakaian Listrik = ");
    scanf("%d",&PemakaianListrik);
    if(GolonganTarif==1){
        if((PemakaianListrik>0)&&(PemakaianListrik<=100)){
            TarifPLN=1000*100;
            printf("Tarif PLN yang harus dibayarkan = %d", TarifPLN);
        }else if((PemakaianListrik>100)&&(PemakaianListrik<1000)){
            TarifPLN=1000*PemakaianListrik;
            printf("Tarif PlN yang harus dibayarkan = %d",TarifPLN);
        }else if(PemakaianListrik>=1000){
            TarifPLN=(1000*PemakaianListrik)*1.1;
            printf("Tarif PLN yang harus dibayarkan = %d", TarifPLN);
        }else{
            printf("Input pemakaian listrik kurang tepat");
        }
    }else if(GolonganTarif==2){
        if((PemakaianListrik>0)&&(PemakaianListrik<=100)){
            TarifPLN=2000*100;
            printf("Tarif PLN yang harus dibayarkan = %d", TarifPLN);
        }else if((PemakaianListrik>100)&&(PemakaianListrik<1000)){
            TarifPLN=2000*PemakaianListrik;
            printf("Tarif PlN yang harus dibayarkan = %d",TarifPLN);
        }else if(PemakaianListrik>=1000){
            TarifPLN=(2000*PemakaianListrik)*1.1;
            printf("Tarif PLN yang harus dibayarkan = %d", TarifPLN);
        }else{
            printf("Input pemakaian listrik kurang tepat");
        }
    }else{
        printf("Input Golongan tarif Kurang tepat");
    }
    printf("\n\n--------------------------------");
    return 0;
}
