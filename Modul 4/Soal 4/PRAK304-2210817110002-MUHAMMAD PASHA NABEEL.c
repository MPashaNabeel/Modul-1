#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if(n==0){
        printf("Nol\n");
    }
    else if(n<=9){
        printf("Satuan\n");
    }
    else if(n>=100){
        printf("Anda Menginput Melebihi Limit Bilangan\n");
    }
    else if(n>=11&&n<=19){
        printf("Belasan\n");
    }
    else{
        printf("Puluhan\n\n");
    }
    return 0;
}
