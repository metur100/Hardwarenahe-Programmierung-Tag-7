#include <stdio.h>
#include	<stdlib.h>

int main( int argc, char ** argv ){
    char cha;
    int in;
    double doub;
    
    if(argc <= 1){
        printf("Usage:  fassungsvermoegen <zahl>\n");
        return 1;
    }
    long eingabe = atoll(argv[1]);
    cha = eingabe;
    in = eingabe;
    doub = eingabe;
    
    printf("  char      : %d \n", (char) cha );
    printf("  int       : %d \n", in );
    printf("  double    : %lf \n", doub );
    
    return 0;
}
