/*
Nama File : HargaDiskon.c
Deskripsi : Program untuk menentukan besarnya harga setelah diberi diskon
Nama : Ivan Naufaldo Yustisio
NIM : 24060119130080
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus
    int Harga;
    char Diskon;

    //Algoritma
    printf("Masukkan Harga Barang = ");
    scanf("%d",&Harga);
    printf("Pilihan Jenis Diskon :\n");
    printf(" - A : Diskon 10 persen\n");
    printf(" - B : Diskon 15 persen\n");
    printf(" - C : Diskon 20 Persen\n");
    printf("Masukkan Jenis Diskon = ");
    scanf(" %c",&Diskon);
    if(Harga>200){
        if (Diskon=='A'){
            Harga = Harga - (Harga*0.1);
            printf("Harga yang perlu dibayar setelah Diskon = %d", Harga);
        }
        else if (Diskon=='B'){
            Harga = Harga - (Harga*0.15);
            printf("Harga yang perlu dibayar setelah Diskon = %d", Harga);
        }
        else if ( Diskon=='C'){
            Harga = Harga - (Harga*0.2);
            printf("Harga yang perlu dibayar setelah Diskon = %d", Harga);
        }
        else{
            printf("Masukkan input kode diskon salah");
        }
    }else{
        printf("Masukkan Input harga kurang tepat");
    }
    return 0;
}
