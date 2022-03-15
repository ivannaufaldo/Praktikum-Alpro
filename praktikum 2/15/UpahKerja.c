/*
Nama File : UpahKerja.c
Deskripsi : Program untuk menentukan besarnya upah kerja
Nama : Ivan Naufaldo Yustisio
NIM : 24060119130080
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //kamus
    int Golongan;
    int JamKerja;

    //Algoritma
    printf("Daftar Golongan :\n");
    printf("Golongan 1 dengan upah per jam 1.000 rupiah\n");
    printf("Golongan 2 dengan upah per jam 1.500 rupiah\n");
    printf("Golongan 3 dengan upah per jam 2.000 rupiah\n");
    printf("Golongan 4 dengan upah per jam 2.500 rupiah\n");
    printf("Masukkan Golongan Gaji = ");
    scanf("%d",&Golongan);
    printf("Masukkan Jam Kerja = ");
    scanf("%d",&JamKerja);
    if(JamKerja>0){
        if(JamKerja<41){
            if(Golongan==1){
                JamKerja=JamKerja*1000;
                printf("Upah Kerja yang harus dibayarkan adalah = %d", JamKerja);
            }
            else if(Golongan==2){
                JamKerja=JamKerja*1500;
                printf("Upah Kerja yang harus dibayarkan adalah = %d", JamKerja);
            }
            else if(Golongan==3){
                JamKerja=JamKerja*2000;
                printf("Upah Kerja yang harus dibayarkan adalah = %d", JamKerja);
            }
            else if(Golongan==4){
                JamKerja=JamKerja*2500;
                printf("Upah Kerja yang harus dibayarkan adalah = %d", JamKerja);
            }
            else{
                printf("Input Golongan yang dimasukkan");
            }
        }else{
            JamKerja-=40;
            if(Golongan==1){
                JamKerja=(JamKerja*1000*1.5)+(40*1000);
                printf("Upah Kerja yang harus dibayarkan adalah = %d", JamKerja);
            }
            else if(Golongan==2){
                JamKerja=(JamKerja*1500*1.5)+(40*1500);
                printf("Upah Kerja yang harus dibayarkan adalah = %d", JamKerja);
            }
            else if(Golongan==3){
                JamKerja=(JamKerja*2000*1.5)+(40*2000);
                printf("Upah Kerja yang harus dibayarkan adalah = %d", JamKerja);
            }
            else if(Golongan==4){
                JamKerja=(JamKerja*2500*1.5)+(40*2500);;
                printf("Upah Kerja yang harus dibayarkan adalah = %d", JamKerja);
            }
            else{
                printf("Input Golongan yang dimasukkan");
            }
        }
    }else{
        printf("Input Jam Kerja Kurang Tepat");
    }
    return 0;
}
