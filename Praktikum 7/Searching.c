#include <stdio.h>
#include <stdbool.h>
#include "Searching.h"

void SEQSearchX1( int T[], int N, int *IX, int X){
    //Kamus Lokal
        int i;
    //Algoritma
        i = 0 ;
        while ((i<N)&&(T[i]!=X)){
            i++;
        }
        if (T[i] == X){
            *IX = i;
        }else{
            *IX = -1;
        }
}

void SEQSearchX2(int T[], int N ,int X, int *IX, bool *Found){
    //kamus
        int i;

    //algoritma
        *Found = false;
        i = 0;
        while ((i<N) && (!*Found)){
            if (T[i]== X){
                *Found=true;
            }else{
                i++;
            }
        }
        if(Found){
            *IX = i;
        }else{
            *IX = -1;
        }


}
