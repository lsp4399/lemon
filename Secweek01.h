#include<stdio.h>
#define pi 3.14
int main() {
	float r, area, perimeter;
	printf("������뾶��\n");
	scanf("%f", &r);
	area = pi * r * r;
	perimeter = pi * r * 2;
	printf("ֱ��Ϊ:\\nԲ�����Ϊ:\n�ܳ�Ϊ:%0.02f", 2 * r, area, perimeter);
	return 0;
}