#include <stdio.h>

int main(){
    int jumlahTr,totalTr = 0;
    
    scanf("%d", &jumlahTr);
    int Tr[jumlahTr];

    for (int i = 0; i < jumlahTr; i++){
        scanf("%d", &Tr[i]);
    }
    
    for (int i = 0; i < jumlahTr; i++){
        totalTr=totalTr+Tr[i];
    }

    if (totalTr <= 0){
        printf("Tidak ada transaksi hari ini.");
    }else{
        printf("%d", totalTr);
    };
    return 0;
}