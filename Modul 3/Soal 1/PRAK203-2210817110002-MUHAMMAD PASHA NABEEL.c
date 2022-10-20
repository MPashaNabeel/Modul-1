#include<stdio.h>

int main()
{
    for(int i=0; i<=1; i++){
    float a,b,i,j,x,y,hasil;
    scanf("%f %f %f %f %f %f", &a,&b,&i,&j,&x,&y);
    hasil = (a-b)*(i/j)-(x+y);
    printf("%.3f", hasil);
    }
    return 0;
}
