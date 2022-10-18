#include<stdio.h>

int main()
{
    for(int i=0; i<=1; i++){
    float a,b,h;
    printf("Masukkan Nilai Pertama : ");
    scanf("%f", &a);
    printf("Masukkan Nilai Kedua : ");
    scanf("%f", &b);
    h = a+b;
    printf("Hasil dari penjumlahan nilai pertama \"%.2f\" dan nilai kedua \"%.2f\" adalah \"%.2f\"\n\n", a,b,h);
    }
}
