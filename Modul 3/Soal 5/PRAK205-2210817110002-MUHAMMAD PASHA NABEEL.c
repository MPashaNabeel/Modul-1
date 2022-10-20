#include<stdio.h>

int main()
{
    int a,b,c,k,l;
    scanf("%d %d", &a,&b);
    c = sqrt((b*b)-(a*a));
    k = a+b+c;
    l = c*a/2;
    printf("\nAlas = %d cm\n", c);
    printf("Tinggi = %d cm\n", a);
    printf("Keliling = %d cm\n", k);
    printf("Luas = %d cm^2\n", l);
}
