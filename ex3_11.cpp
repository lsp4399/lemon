#include <stdio.h>
#include <string.h>
void main()
{ 
	char  c1,c2,c3,c4,c5;
	scanf("%c%c%c%c%c",&c1,&c2,&c3,&c4,&c5);
	c1=c1+4;
	c2=c2+4;
	c3=c3+4;
	c4=c4+4;
	c5=c5+4;
	c1=c1>'Z'?c1-26:c1;
	c2=c2>'z'?c2-26:c2;
	c3=c3>'z'?c3-26:c3;
	c4=c4>'z'?c4-26:c4;
	c5=c5>'z'?c5-26:c5;
	printf("%c%c%c%c%c",c1,c2,c3,c4,c5);
}