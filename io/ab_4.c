#include <stdio.h>

int main()
{
	int a, b;

	scanf("%d %d", &a, &b); // (a)
	printf("%.9lf", (double)a / b); // (b)

	return 0;
}