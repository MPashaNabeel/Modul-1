#include <stdio.h>
#include <string.h>

int main(){
    char asli[100];
    char palsu[100];
    scanf("%[^\n]%*c", &asli);
    scanf("%[^\n]%*c", &palsu);
    int kode,pesan,i=0,j=0;
    kode=strlen(asli);
    pesan=strlen(palsu);
    if(kode !=pesan){
        printf("Panjang kalimat berbeda, pesan palsu");}
    else{
        for(int a=0; a<kode; a++){
            if(asli[a]==palsu[a]){
                if (asli[a] == ' '){
                    printf(" ");}
                else {
                    printf("*");
                    i++;}
                }
            else{
                printf("#");
                j++;}
        }
    printf("\n* = %d",i);
    printf("\n# = %d",j);
    if(i >= j){
        printf("\nPesan Asli");}
    else{
        printf("\nPesan Palsu");}
    }
    return 0;
}