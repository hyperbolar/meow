#include <stdio.h>

int main(void)
{
	int v[5];

	for (int i = 0; i < 5; i++) {
		v[i] = i;
	}

	for (int i = 0; i < 5; i++) {
		printf("v[%d] = %d\n", i, v[i]);
	}

	return 0;
}

//exercise 5-1


int main(void)
{
	int v[5];

	for (int i = 0; i < 5; i++) {
		v[i] = 5 - i;
	}

	for (int i = 0; i < 5; i++) {
		printf("v[%d] = %d\n", i, v[i]);
	}

	return 0;
}

//exercise 5-2


int main(void)
{
	int v[5] = {5, 4, 3, 2, 1};

	for (int i = 0; i < 5; i++) {
		printf("v[%d] = %d\n", i, v[i]);
	}

	return 0;
}

//exercise 5-3


int main(void)
{
	int a[5] = {17, 23, 36};
	int b[5];

	for (int i = 0; i < 5; i++) {
		b[i] = a[4 - i];
	}

	puts("   a   b");
	puts("---------");
	for (int i = 0; i < 5; i++) {
		printf("%4d%4d\n", a[i], b[i]);
	}

	return 0;
}

//exercise 5-4

#include <stdio.h>
#define INDEXMAX 7

int main(void)
{
	int i;
	int val[INDEXMAX];

	for (i = 0; i < INDEXMAX; i++) {
		printf("value %d: ", i);
		scanf_s("%d", &val[i]);
	}

	for (i = 0; i < INDEXMAX; i++) {
		printf("Value %d: %d\n", i, val[i]);
	}

	puts("Reversed Now...");

	for (i = 0; i < INDEXMAX / 2; i++) {
		int temp = val[i];
		val[i] = val[INDEXMAX - 1 - i];
		val[i] = temp;
	}

	for (i = 0; i < INDEXMAX; i++) {
		printf("val[%d] = %d\n", i, val[i]);
	}

	return 0;
}

//exercise 5-5

#include <stdio.h>

int main(void)
{
	int a;
	double b;
	a = b = 1.5;
	printf("a = %d\nb = %.1f", a, b);

	return 0;
}
//output[ a = 1; b = 1.5]
//exercise 5-6

#include <stdio.h>
#define DATAAMOUNT 4
int main(void)
{
	int arrValSet[DATAAMOUNT];
	for (int i = 0; i < DATAAMOUNT; i++) {
		printf("No.%d = ", i + 1);
		scanf_s("%d", &arrValSet[i]);
	}

	printf("(%d,", arrValSet[0]);
	for (int i = 1; i < DATAAMOUNT - 1; i++) {
		printf(" %d,", arrValSet[i]);
	}
	printf(" %d)", arrValSet[DATAAMOUNT - 1]);

	return 0;
}

//exercise 5-7

