#include <stdio.h>

int main()
{
	int input;

	printf("Type in a Number - ODD\\EVEN : ");
	scanf("%d", &input);

	input = input % 2;
	if (input == 0)
		printf("Even");
	else
		printf("Odd");

	return 0;

}