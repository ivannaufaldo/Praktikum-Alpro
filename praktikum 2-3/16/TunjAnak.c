/*
Nama File : TunjAnak.c
Deskripsi : Program untuk menentukan besarnya Tunjangan Anak yang diberikan
Nama : Ivan Naufaldo Yustisio
NIM : 24060119130080
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //kamus
    int JumlahAnak;
    int Gajipokok;
    int TunjAnak;

    //algoritma
    printf("------------Tunjangan ANAK-------------\n\n");
    printf("Masukkan Jumlah Anak = ");
    scanf("%d", &JumlahAnak);
    printf("Masukkan Gaji Pokok = ");
    scanf("%d", &Gajipokok);
    if(Gajipokok>0){
        if((JumlahAnak>=0)&&(JumlahAnak<4)){
            TunjAnak=JumlahAnak*(0.1*Gajipokok);
            printf("Tunjangan Anak = %d", TunjAnak);
        }
        else if(JumlahAnak>3){
            TunjAnak=3*(0.1*Gajipokok);
            printf("Tunjangan Anak = %d", TunjAnak);
        }
        else{
            printf("Input Jumlah Anak Kurang Tepat\n");
        }
    }else{
        printf("Input Gaji Pokok Kurang Tepat\n\n");
    }
    printf("\n\n--------------------------------------");
    return 0;
}
