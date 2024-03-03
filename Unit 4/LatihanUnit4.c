#include <stdio.h>

void keliling(int panjang){
    int k = panjang*4;
    printf("%d\n", k);
}

int luas(int panjang){
    int l = panjang*panjang;
    return l;
}

void volume(int panjang){
    int v = panjang*panjang*panjang;
    printf("%d\n", v);
}

int main(){
    int sisi;
    scanf("%d", &sisi);

    keliling(sisi);
    printf("%d\n", luas(sisi));
    volume(sisi);
    return 0;
}