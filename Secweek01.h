#include<stdio.h>
#define pi 3.14
int main() {
	float r, area, perimeter;
	printf("请输入半径：\n");
	scanf("%f", &r);
	area = pi * r * r;
	perimeter = pi * r * 2;
	printf("直径为:\\n圆的面积为:\n周长为:%0.02f", 2 * r, area, perimeter);
	return 0;
}