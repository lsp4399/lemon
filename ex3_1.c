#include <stdio.h>

void main(){

    char ch1,ch2,ch3,ch4,ch5,ch6;

    ch1='a';

    ch2=97;

    ch3='\141';

    ch4=0141;

    ch5='\x61';

    ch6=0x61;



    printf("ch1:%d,%c\n",ch1,ch1);

    printf("ch2:%d,%c\n",ch2,ch2);

    printf("ch3:%d,%c\n",ch3,ch3);

    printf("ch4:%d,%c\n",ch4,ch4);

    printf("ch5:%d,%c\n",ch5,ch5);

    printf("ch6:%d,%c\n",ch6,ch6);

}