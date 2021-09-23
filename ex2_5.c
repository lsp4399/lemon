#include<stdio.h>
void main(){
	short a=32767,b=-32768;
	printf("a=%d,b=%d\n",a,b);

	a=a+1;
	b=b-1;
	printf("a=%d,b=%d\n",a,b);
}