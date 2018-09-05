#include <stdio.h>

int main(void) 
{
	printf("15减去37的结果是：%d。\n", 15 - 37);

	return 0;
}

// 练习1-1

int main(void) 
{
	printf("天\n地\n人\n");

	return 0;
}

//练习1-2

int main(void)
{
	printf("喂！\n\n您好！\n再见。\n");

	return 0;
}

//练习1-3

int main(void)
{
	int vx = 3.14;
	
	printf("int vx = %d\n", vx);

	return 0;
}

//练习1-4

int main(void)
{
	int x; 
	printf("请输入一个整数：");
	scanf_s("%d", &x);
	
	printf("该数加12后的结果是%d\n", 12 + x);

	return 0;
}

//练习1-5

int main(void)
{
	int x; 
	printf("请输入一个整数：");
	scanf_s("%d", &x);
	
	printf("该数减6后的结果是%d\n", x - 6);

	return 0;
}

//练习1-6

int main(void)
{
	puts("天"); puts("地"); puts("人");

	return 0;
}

//练习1-7

int main(void)
{
	int x, y;
	puts("输入两个整数：");
	printf("整数 1: "); scanf_s("%d", &x);
	printf("整数 2: "); scanf_s("%d", &y);

	printf("它们的乘积是：%d", x * y);

	return 0;
}

//练习1-8

int main(void)
{
	int x, y, z;
	puts("输入三个整数：");
	printf("整数 1: "); scanf_s("%d", &x);
	printf("整数 2: "); scanf_s("%d", &y);
	printf("整数 3: "); scanf_s("%d", &z);

	printf("它们的和是：%d", x + y + z);

	return 0;
}

//练习1-9

