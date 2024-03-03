#include <stdio.h>

int main(){
    int jumlahAngka, totalAngka = 0;
    scanf("%d", &jumlahAngka);
    int Angka[jumlahAngka];

    for (int i = 0; i < jumlahAngka; i++){
        scanf("%d", &Angka[i]);
    }

    for (int i = 0; i < jumlahAngka; i++){
        totalAngka = totalAngka + Angka[i];
    }

    printf("%d", totalAngka);    
    return 0;
}