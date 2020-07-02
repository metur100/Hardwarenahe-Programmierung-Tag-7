#include<stdio.h>

int main(){
    int a = 0x1234;
    char *erg = (char*)&a;
    if(*erg == 0x34)
        puts("0x1234 ist 0x34 0x12 - dieser Computer benutzt little-endian");
    else
        puts("0x1234 ist 0x12 0x134 - dieser Computer benutzt big-endian");


}
