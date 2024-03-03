#include <stdio.h>

int i, j;

int main(){
    
    for (i = 2; i <= 3; ++i) {//loop pertama
        printf("Bilangan utama: %d\n", i);
        
        for (j = 1; j <= 2; ++j) {//loop kedua
            printf(" Bilangan pengali: %d\n", j);
            printf("  Hasil perkalian: %d\n\n", j * i);
        }
    }
    return 0;
}

//saat menjalankan loop pertama di dalamnya terdapat loop kedua sehingga program akan membereskan terlebih dahulu
//loop kedua lalu melanjukan kembali mengulang loop yang pertama