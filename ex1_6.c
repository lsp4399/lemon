#include<stdio.h>
void main()
{
int a,b;
char c;
printf("������������ �ÿո����\n");
scanf("%d %d",&a,&b);
printf("�����������\n");
getchar();
scanf("%c",&c);
switch(c)
{
case '+' :
printf("%d+%d=%d",a,b,a+b);break;
case '-' :
printf("%d-%d=%d",a,b,a-b);break;
default :
	printf("���������");
}
}