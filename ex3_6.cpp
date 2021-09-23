#include <stdio.h>

void main(){

    int i,j,m,n;

    i=8; j=8;

    m=i++; n=++j;

    printf("%d\t%d\t%d\t%d\n",i,m,j,n);

    

    i=8; j=8;

    i++; ++j;

    m=i; n=j;

    printf("%d\t%d\t%d\t%d\n",i,m,j,n);

}