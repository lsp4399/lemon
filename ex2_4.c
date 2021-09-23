#include<stdio.h>
void main(){
	short a,b;
	unsigned short c,d;
	a=-5000;
	b=5000;
	c=a;
	d=b;
	printf("a=%d,b=%d\n",a,b);
	printf("c=%d,d=%d\n",c,d);

	a=-50000;
	b=50000;
	c=a;
	d=b;
	printf("a=%d,b=%d\n",a,b);
	printf("c=%d,d=%d\n",c,d);
}
