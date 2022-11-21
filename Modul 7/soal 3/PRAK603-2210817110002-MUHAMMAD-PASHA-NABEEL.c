#include <stdio.h>

int main(){
    int baris1,baris2,isi,hasil;
    scanf("%d %d", &baris1, &baris2);
    int angka1[baris1], angka2[baris2];
    if(baris1==baris2){
        for(int i=0; i<baris1; i++){
            scanf("%d", &isi);
            angka1[i]=isi;
    }
    for(int i=0; i<baris2; i++){
        scanf("%d", &isi);
        angka2[i]=isi;
    }
    for(int i=0; i<baris1; i++){
        hasil=angka1[i]* angka2[i];
        printf("%d ", hasil);
        }
    }
    else{
        printf("Jumlah Tidak Sama");
    }
    return 0;
}