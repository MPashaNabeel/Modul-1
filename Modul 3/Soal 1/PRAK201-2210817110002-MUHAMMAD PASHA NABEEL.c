#include<stdio.h>

int main()
{
    char nama[50], nim[20], kelas[2], ttl[50], alamat[20], hobby[50], nohp[12];

    printf("Nama\t\t\t: ");
    gets(nama);
    printf("NIM\t\t\t: ");
    gets(nim);
    printf("Kelas Paralel\t\t: ");
    gets(kelas);
    printf("Tempat/Tanggal Lahir\t: ");
    gets(ttl);
    printf("Alamat\t\t\t: ");
    gets(alamat);
    printf("Hobby\t\t\t: ");
    gets(hobby);
    printf("No.HP\t\t\t: ");
    gets(nohp);

    printf("\nNama\t\t\t: %s", nama);
    printf("\nNIM\t\t\t: %s", nim);
    printf("\nKelas Paralel\t\t: %s", kelas);
    printf("\nTempat/Tanggal Lahir\t: %s", ttl);
    printf("\nAlamat\t\t\t: %s", alamat);
    printf("\nHobby\t\t\t: %s", hobby);
    printf("\nNo.HP\t\t\t: %s", nohp);
    return 0;
}
