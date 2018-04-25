#include "stdio.h"

void main()
{
    typedef struct{
    char nim[3];
    char nama[25];
    int nilai[3];
    }data;
    data mhs[4];
    int total[4];
    int i,j;
    float rata[4];

    printf("Input data mahasiswa\n");
    for(i=0;i<4;i++)
    {
        total[i] =0;
        printf("Masukan Nim:"); scanf("%s",&mhs[i].nim);
        printf("Masukan Nama:"); scanf("%s",&mhs[i].nama);
        for(j=0;j<3;j++)
        {
            printf("Masukan nilai="); scanf("%i",&mhs[i].nilai[j]);
            total[i]=total[i]+mhs[i].nilai[j];
        }
        rata[i]=(float)total[i]/3;
    }
    printf("\n\t\t\t\t  Tabel Mahasiswa\n");
    printf("Nim\t\tNama\t\t\tNilai\t\t\tTotal\t\tRata\n");
    printf("\t\t\t\tNilai1\tNilai2\tNilai3\n");
    printf("====================================================================================\n");
    for(i=0;i<4;i++)
    {
    printf("%s\t\t%s\n",mhs[i].nim,mhs[i].nama);
    }

}
