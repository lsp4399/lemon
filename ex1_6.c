#include<stdio.h>
void main()
{
int a,b;
char c;
printf("请输入两个数 用空格隔开\n");
scanf("%d %d",&a,&b);
printf("请输入运算符\n");
getchar();
scanf("%c",&c);
switch(c)
{
case '+' :
printf("%d+%d=%d",a,b,a+b);break;
case '-' :
printf("%d-%d=%d",a,b,a-b);break;
default :
	printf("运算符错误");
}
}