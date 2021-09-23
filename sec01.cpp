#include <stdio.h>

int main() {
	float r, area, perimeter;
	printf("请输入半径：\n");
	scanf("%f", &r);
	area = 3.14 * r * r;
	perimeter = 3.14 * r * 2;
	printf("\n圆的半径：%f\n圆的面积为:%f\n周长为:%f\n", r, area, perimeter);
	
}