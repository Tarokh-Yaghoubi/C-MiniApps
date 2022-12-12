#include <stdio.h>

int main()
{
	const int a, b, c;
	int res = 0;


	printf("First : \n");
	scanf("%d", &a);
	printf("Second : \n");
	scanf("%d", &b);
	printf("Third : \n");
	scanf("%d", &c);

	if (a > b)
		res = a;
	else
		res = b;

	if (c > res)
		res = c;

	printf("\nResult %d\n", res);

	return 0;
}