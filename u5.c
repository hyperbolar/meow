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

