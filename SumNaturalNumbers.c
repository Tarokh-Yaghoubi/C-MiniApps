#include <stdio.h>

int main()
{
	int i = 1;
	int sum = 0;
	for (i = i; i <= 9; i++)
		sum += i;

	printf("The sum is : %d\n", sum);
	return 0;
}