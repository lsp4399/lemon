#include <stdio.h>

void main(){

    char c1='a',c2='b',c3='c',c4='\101',c5='\116';

    printf("12345678901234567890\n");

    printf("a%cb%c\tc%c\tabc\n",c1,c2,c3);

    printf("\t%c%c\tabc\b123\n",c4,c5);

}