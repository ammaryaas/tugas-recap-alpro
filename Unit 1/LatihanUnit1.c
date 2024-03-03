#include <stdio.h>

int main(){
    int v1,s1,t1;
    int v2,s2,t2;

    scanf("%d %d", &s1, &t1);
    scanf("%d %d", &v1, &t2);
    scanf("%d %d", &s2, &v2);

    float kecepatan = (float) s1/t1;
    float jarak = (float) v1*t2;
    float waktu = (float) s2/v2; 

    printf("%.2f\n", kecepatan);
    printf("%.2f\n", jarak);
    printf("%.2f\n", waktu);
    return 0;
}