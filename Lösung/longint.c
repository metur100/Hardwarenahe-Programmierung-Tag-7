#include <stdio.h>
#include <limits.h>
#include <getopt.h>


int main( int argc, char ** argv ){

    printf("Der Datentyp longint benötigt %ld Bytes Speicherplatz.\n", sizeof(long));

    char option;
    while((option = getopt(argc, argv, "mM")) !=EOF){
        switch(option){
            case 'm': 
            {
                printf("Die kleinste darstellbare Zahl beträgt dann %ld \n", LONG_MAX);
                break;
            }
            case 'M': 
            {
                printf("Die größte darstellbare Zahl beträgt dann %ld \n", LONG_MIN);
                break;
            }
        }
    }

    return 0;

}
