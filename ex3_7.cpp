#include <stdio.h>
void main(){
	int n,y,z;
	n=3;
	y=(++n)+(++n)+(+n);
	printf("n=%d\ty=%d\n",n,y);
	n=3;
	z=(n++)+(n++)+(n++);
	printf("n=%d\tz=%d\n",n,z);
	n=3;
	printf("n=%d\t++=%d\n",n,++n);
}