#include <stdio.h>
#define mian main

int main(void)
{
	int x, y;
	puts("输入两个整数：");
	printf("整数 x："); scanf_s("%d", &x);
	printf("整数 y："); scanf_s("%d", &y);
	printf("x的值是y的%d%%", 100 * x / y);
  /*转义一个百分号应该输入%%。*/
	return 0;
}

//练习2-1

int main(void)
{
	int x, y;
	puts("输入两个整数：");
	printf("整数 x："); scanf_s("%d", &x);
	printf("整数 y："); scanf_s("%d", &y);
	printf("他们的和是%d，积是%d", x + y, x * y);

	return 0;
}

//练习2-2

int main(void)
{
	double x;
	printf("请你输入一个实数："); scanf_s("%lf", &x);
	printf("你输入的实数是%f", x);

	return 0;
}

//练习2-3

int main(void)
{
	int a, b;
	puts("输入两个整数：");
	printf("整数 a："); scanf_s("%d", &a);
	printf("整数 b："); scanf_s("%d", &b);
	puts("开始验证...>");
	printf("(int) a / b = %d\n", (int)a / b);
	printf("(double) a / b = %f\n", (double)a / b);
	printf("(double) (a / b) = %f\n", (double)(a / b));
	printf("(int) a / (double) b = %f", (int)a / (double)b);

	return 0;
}

//练习2-4 
//这个没理解要我验证什么

int main(void)
{
	int a, b;
	
	puts("请输入两个整数：");
	printf("整数 a："); scanf_s("%d", &a);
	printf("整数 b："); scanf_s("%d", &b);
	printf("a是b的%f%%", (double)a * 100 / b);

	return 0;
}

//练习2-5

int main(void)
{
	int hgt;
	
	printf("请输入您的身高：");
	scanf_s("%d", &hgt);
	double wgt = (hgt - 100) * 0.9;
	
	printf("您的标准体重是%.1f公斤。", wgt);

	return 0;
}

//练习2-6

