#include <stdio.h>

int main(void)
{
	int x;
	puts("请输入一个整数：");
	do {
		scanf_s("%d", &x);
		if (x > 0)
			puts("你输入了一个正数！你好棒棒哦！");
		else if (x == 0)
			puts("你输入了0！");
		else
			puts("你输入了一个负数！耶！");
	} while (x != EOF);

	return 0;
}

//练习4-1（有个问题是找不到合适的终止条件

int main(void)
{
	int n1, n2;
	int sum = 0;
	
	puts("请输入两个整数作为上下限：");
	printf("下限："); scanf_s("%d", &n1);
	printf("上限："); scanf_s("%d", &n2);
	
	do {
		sum += n1;
		n1++;
	} while (n1 <= n2);
	printf("指定区间内所有整数的和是%d",sum);

	return 0;
}

//练习4-2

int main(void)
{
	int no;

	printf("请输入一个整数："); scanf_s("%d", &no);

	while (no >= 0) {
		printf("%d ", no);
		no--;
	}

	return 0;
}

//练习4-3

int main(void)
{
	int no;

	printf("请输入一个整数："); scanf_s("%d", &no);

	while (no) {
		printf("%d ", no);
		no--;
	}

	return 0;
}

//练习4-4

int main(void)
{
	int no, i;

	printf("请输入一个整数："); scanf_s("%d", &no);

	i = 0;
	while (i < no) {
		printf("%d ", ++i);
	}

	return 0;
}

//练习4-5

int main(void)
{
	int no, i;

	printf("请输入一个整数："); scanf_s("%d", &no);

	i = 2;
	while (i <= no) {
		printf("%d ", i);
		i += 2;
	}

	return 0;
}

//练习4-6

int main(void)
{
	int no, i;

	printf("请输入一个整数："); scanf_s("%d", &no);

	i = 2;
	while (i <= no) {
		printf("%d ", i);
		i *= 2;
	}

	return 0;
}

//练习4-7

int main(void)
{
	int no;

	printf("正整数："); 
	scanf_s("%d", &no);

	while (no) {
		putchar('*');
		no--;
	}

	return 0;
}

//练习4-8

int main(void)
{
	int no, i;

	printf("正整数："); 
	scanf_s("%d", &no);

	i = 0;
	while (i < no) {
		if (i % 2)
			putchar('-');
		else
			putchar('+');
		i++;
	}

	return 0;
}

//练习4-9

int main(void)
{
	int no;

	printf("正整数："); 
	scanf_s("%d", &no);

	while (no) {
		puts("*");
		no--;
	}

	return 0;
}

//练习4-10

int main(void)
{
	int no;

	do {
		printf("请输入一个正整数："); 
	    scanf_s("%d", &no);
		if (no <= 0)
			puts("\a请不要输入非正整数。");
	} while (no <= 0);

	printf("%d的逆向显示的结果是：", no);
	while (no) {
		printf("%d", no % 10);
		no /= 10;
	}
	puts("。");

	return 0;
}

//练习4-11

int main(void)
{
	int no, i;

	do {
		printf("请输入一个正整数："); 
	    scanf_s("%d", &no);
		if (no <= 0)
			puts("\a请不要输入非正整数。");
	} while (no <= 0);

	printf("%d的位数是：", no);
	
	i = 0;
	while (no) {
		i += 1;
		no /= 10;
	}
	printf("%d。\n", i);

	return 0;
}

//练习4-12

int main(void)
{
	int no, sum;

	printf("请输入一个正整数："); 
	scanf_s("%d", &no);
	
	sum = 0;

	for (int i = 1; i <= no; i++) {
		sum += i;
	}
	printf("1到%d的和为%d", no, sum);

	return 0;
}

//练习4-13

int main(void)
{
	int no, sum;

	printf("请输入一个正整数："); 
	scanf_s("%d", &no);
	
	sum = 0;

	for (int i = 1; i <= no; i++) {
		printf("%d", i%10);
	}

	return 0;
}

//练习4-14


int main(void)
{
	int h1, h2, skip;

	printf("开始数值（cm）："); 
	scanf_s("%d", &h1);
	printf("结束数值（cm）：");
	scanf_s("%d", &h2);
	printf("间隔数值（cm）：");
	scanf_s("%d", &skip);

	for (int i = h1; i <= h2; i += skip) {
		double wgt = (i - 100)* 0.9;
		printf("%dcm\t%.2fkg\n", i, wgt);
	}

	return 0;
}

//练习4-15

int main(void)
{
	int i;
	printf("整数值："); 
	scanf_s("%d", &i);
	for (int j = 1; j <= i; j += 2) {
		printf("%d ", j);
	}

	return 0;
}

//练习4-16

int main(void)
{
	int i;
	printf("n的值："); 
	scanf_s("%d", &i);
	for (int j = 1; j <= i; j++) {
		printf("%d的二次方是%d \n", j, j*j);
	}

	return 0;
}

//练习4-17

int main(void)
{
	int i;
	printf("显示多少个*："); 
	scanf_s("%d", &i);
	for (int j = 0; j < i; j++) {
		if (j%5==0) putchar('\n');
		putchar('*');
	}

	return 0;
}

//练习4-18

int main(void)
{
	int i;
	int factor = 0;
	printf("整数值："); 
	scanf_s("%d", &i);
	for (int j = 1; j <= i; j++) {
		if (i % j == 0) factor++;
	}
	printf("约数有%d个。", factor);

	return 0;
}

//练习4-19

int main(void)
{
	printf("   |");
	for (int i = 1; i <= 9; i++) {
		printf("  %2d", i);
	}
	printf("\n");

	for (int i = 1; i <= 40; i++)
		putchar('-');
	printf("\n");

	for (int i = 1; i <= 9; i++) {
		printf("%2d |", i);
		for (int j = 1; j <= 9; j++)
			printf("  %2d", j * i);
		printf("\n");
	}


	return 0;
}

//练习4-20

int main(void)
{
	int len;
	puts("生成一个正方形");
  printf("正方形有几层："); 
	scanf_s("%d", &len);

	for (int i = 0; i < len; i++) {
		for (int j = 0; j < len; j++)
			putchar('*');
		printf("\n");
	}

	return 0;
}

//练习4-21

#define max(x, y) (( x > y) ? x : y)
#define min(x, y) (( x < y) ? x : y)

int main(void)
{
	int x, y;
	puts("让我们来画一个长方形");
	printf("一边："); scanf_s("%d", &x);
	printf("另一边："); scanf_s("%d", &y);
	for (int i = 0; i < min(x, y); i++) {
		for (int j = 0; j < max(x, y); j++) {
			putchar('*');
		}
		putchar('\n');
	}

	return 0;
}

//练习4-22

int main(void)
{
	int len;
	
	puts("生成直角在左上方的等腰直角三角形。");
	printf("短边：");
	scanf_s("%d", &len);

	for (int i = 0; i < len; i++) {
		for (int j = len; j > i; j--) {
			putchar('*');
		}
		putchar('\n');
	}

	return 0;
}

//练习4-23-1

int main(void)
{
	int len;
	
	puts("生成直角在右上方的等腰直角三角形。");
	printf("短边：");
	scanf_s("%d", &len);

	for (int i = 0; i < len; i++) {
		for (int j = 0; j < i; j++) {
			putchar(' ');
		}
		for (int j = 0; j < len - i; j++) {
			putchar('*');
		}
		putchar('\n');
	}

	return 0;
}

//练习4-23-2

int main(void)
{
	int len;
	
	puts("让我们来画一个金字塔。");
	printf("金字塔有几层：");
	scanf_s("%d", &len);

	for (int i = 0; i < len; i++) {
		for (int j = 0; j < len - i; j++) {
			putchar(' ');
		}
		for (int j = 0; j < i * 2 + 1; j++) {
			putchar('*');
		}
		putchar('\n');
	}

	return 0;
}

//练习4-24


int main(void)
{
	int len;
	
	puts("让我们来画一个向下的金字塔。");
	printf("金字塔有几层：");
	scanf_s("%d", &len);

	for (int i = 0; i <= len; i++) {
		for (int j = 0; j < i; j++) {
			putchar(' ');
		}
		for (int j = 0; j < (len - i) * 2 - 1; j++) {
			printf("%d", (i+1) % 10);
		}
		putchar('\n');
	}

	return 0;
}

//练习4-25
