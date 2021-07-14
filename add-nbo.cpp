#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#include<netinet/in.h>

int main(int argc, char **argv){
    uint32_t buffer1, buffer2;
    FILE *f1, *f2;

    f1=fopen(argv[1],"r");
    f2=fopen(argv[2],"r");

    int num1=fread(&buffer1,sizeof(uint32_t),1,f1);
    int num2=fread(&buffer2,sizeof(uint32_t),1,f2);

    buffer1=ntohl(buffer1);
    buffer2=ntohl(buffer2);
    int sum=buffer1+buffer2;

    printf("%d(0x%x) + %d(0x%x) = %d(0x%x)",buffer1,buffer1,buffer2,buffer2,sum,sum);
}
