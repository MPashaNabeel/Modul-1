#include<stdio.h>

int main()
{
    int a,b;
    scanf("%d", &a);
    scanf("%d", &b);
    if (a>b){
        printf("%d %d\n", b,a);
    }
    else
        printf("%d %d\n", a,b);
    return 0;
}
