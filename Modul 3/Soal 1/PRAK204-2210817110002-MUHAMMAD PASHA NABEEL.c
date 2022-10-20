#include<stdio.h>

int main()
{
    for(int i=0; i<=1; i++){
    float phi,r,t,v,l,k;
    phi = 22/7.f;
    scanf("%f %f", &r, &t);
    v = phi*r*r*t;
    printf("\nVolume= %.2f\n", v);
    l = 2*phi*r*(t+r);
    printf("Luas= %.2f\n", l);
    k = 2*phi*r;
    printf("Keliling= %.2f\n", k);
    }
    return 0;
}
