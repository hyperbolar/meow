#include <stdio.h>

int main(void)
{
	int a, b;
	
	printf("请输入两个整数：");
	printf("整数 a："); scanf_s("%d", &a);
	printf("整数 b："); scanf_s("%d", &b);
	
	if (a%b) puts("a不是b的约数。");
	else puts("a是b的约数。");

	return 0;
}

//练习3-1

int main(void)
{
	int no;
	printf("请输入一个整数：");
	scanf_s("%d", &no);
	
	if (no == 0)
		puts("该整数是0。");
	else if (no > 0)
		puts("该整数是正数。");
	else if (no < 0)
		puts("该整数是负数。");

	return 0;
}

//练习3-2 （和清单3-9代码运行出来没区别的感觉

int main(void)
{
	int no;
	printf("请输入一个整数：");
	scanf_s("%d", &no);
	
	printf("绝对值是%d", (no >= 0) ? no : -no);

	return 0;
}

//练习3-3

int main(void)
{
	int A, B;
	puts("请输入两个整数：");
	printf("整数A：");  scanf_s("%d", &A);
	printf("整数B：");  scanf_s("%d", &B);
	
	if (A > B)
		puts("A大于B");
	else if (A < B)
		puts("A小于B");
	else
		puts("A等于B");

	return 0;
}

//练习3-4

int main(void)
{
	printf("运算符\'==\'的计算结果是%d或%d\n", 1 == 1, 1 == 0);
	printf("运算符\'!=\'的计算结果是%d或%d\n", 1 != 0, 1 != 1);
	printf("运算符\'<\'的计算结果是%d或%d\n", 0 < 1, 1 < 0);
	printf("运算符\'<=\'的计算结果是%d或%d\n", 0 <= 1, 1 <= 0);

	return 0;
}

//练习3-5

int main(void)
{
	int n1, n2, n3, min;
	puts("输入三个整数：");
	printf("n1: "); scanf_s("%d", &n1);
	printf("n2: "); scanf_s("%d", &n2);
	printf("n3: "); scanf_s("%d", &n3);

	min = n1;
	if (n2 < min)
		min = n2;
	if (n3 < min)
		min = n3;

	printf("这三个数中最小的是%d", min);

	return 0;
}

//练习3-6

int main(void)
{
	int n1, n2, n3, n4, max;
	puts("输入四个整数：");
	printf("n1: "); scanf_s("%d", &n1);
	printf("n2: "); scanf_s("%d", &n2);
	printf("n3: "); scanf_s("%d", &n3);
	printf("n4: "); scanf_s("%d", &n4);

	max = n1;
	if (n2 > max)
		max = n2;
	if (n3 > max)
		max = n3;
	if (n4 > max)
		max = n4;

	printf("这四个数中最小的是%d", max);

	return 0;
}

//练习3-7

int main(void)
{
	int n1, n2, diff;
	puts("输入两个整数：");
	printf("n1: "); scanf_s("%d", &n1);
	printf("n2: "); scanf_s("%d", &n2);

	if (n1 >= n2)
		diff = n1 - n2;
	else
		diff = n2 - n1;
	
	printf("他们的差是：%d", diff);

	return 0;
}

//练习3-8

int main(void)
{
	int no;
	puts("输入一个整数：");
	printf("no: "); scanf_s("%d", &no);
	
	if(no)
		printf("该整数是%s数。", (no > 0) ? "正" : "负");
	else
		printf("该整数是0。");
	
	return 0;
}

//练习3-9

int main(void)
{
	int n1, n2, n3;
	puts("输入三个整数：");
	printf("n1: "); scanf_s("%d", &n1);
	printf("n2: "); scanf_s("%d", &n2);
	printf("n3: "); scanf_s("%d", &n3);
	
	if (n1 == n2 && n1 == n3)
		puts("三个数都相等。");
	else if (n1 == n2 || n1 == n3 || n2 == n3)
		puts("有两个值相等。");
	else
		puts("都不相等。");
	
	return 0;
}

//练习3-10

int main(void)
{
	int n1, n2;
	puts("输入两个整数：");
	printf("n1: "); scanf_s("%d", &n1);
	printf("n2: "); scanf_s("%d", &n2);
	
	int diff = (n1 >= n2) ? n1 - n2 : n2 - n1;
	printf("%s", (diff <= 10) ? "他们的差小于等于10" : "他们的差大于11");
	
	return 0;
}

//练习3-11

int main(void)
{
	int no;
	puts("输入一个整数：");
	printf("no: "); scanf_s("%d", &no);
	
	switch (no % 2) {
	case 0: puts("该整数是偶数。"); break;
	case 1: puts("该整数是奇数。"); break;
	}
	
	return 0;
}

//练习3-12

int main(void)
{
	int month;
	printf("输入一个月份：");
	scanf_s("%d", &month);
	
	switch (month) {
	case 1: puts("一月是冬季。"); break;
	case 2: puts("二月是冬季。"); break;
	case 3: puts("三月是春季。"); break;
	case 4: puts("四月是春季。"); break;
	case 5: puts("五月是春季。"); break;
	case 6: puts("六月是夏季。"); break;
	case 7: puts("七月是夏季。"); break; 
	case 8: puts("八月是夏季。"); break;
	case 9: puts("九月是秋季。"); break;
	case 10: puts("十月是秋季。"); break;
	case 11: puts("十一月是秋季。"); break;
	case 12: puts("十二月是冬季。"); break;
	default:puts("输入错误！再见！");
	}
	
	return 0;
}

//练习3-13 （这个题目没找到比较好的方法 

