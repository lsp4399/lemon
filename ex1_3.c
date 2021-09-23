#include<stdio.h>
main()
{
	int x,y,max;
	scanf("%d%d",&x,&y);
	if(x>y)
		max=x;
	else
		max=y;
	printf("max=%d",max);
}