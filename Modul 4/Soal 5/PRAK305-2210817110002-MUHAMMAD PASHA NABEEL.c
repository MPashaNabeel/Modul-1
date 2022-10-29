#include <stdio.h>

int main()
{
    int sec, hr, jm, mnt, dtk;
    scanf("%d", &sec);
    if(sec<=86400){
        jm =sec/3600;
        dtk=sec-3600*jm;
        mnt=dtk/60;
        dtk=dtk-60*mnt;
        printf("%.2d:%.2d:%.2d\n\n", jm, mnt, dtk);}
    else{
        hr =sec/86400;
        jm =(sec-(hr*86400))/3600;
        mnt=((sec-hr*86400)-(jm*3600))/60;
        dtk=((sec-hr*86400)-(jm*3600))-(mnt*60);
        printf("%d hari %.2d:%.2d:%.2d\n\n", hr, jm, mnt, dtk);}
        return 0;
    }
