#include <stdio.h>

int main()
{
	int a;
	printf("Type In a Number : ");
	scanf("%d", &a);

	if (a > 0)
		printf("Positive");
	else if (a == 0)
		printf("Zero");
	else
		printf("Negitive");

	return 0;

}
