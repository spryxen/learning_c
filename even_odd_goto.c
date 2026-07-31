#include <stdio.h>

int main(void) {

	int number;

	printf("Enter a number: ");
	scanf("%d", &number);

	if(number % 2 == 0)
		goto even;
	else
		goto odd;

	even:

		printf("The number %d is even number.\n", number);
		goto end;

	odd:
		printf("The number %d is odd number.\n", number);
		goto end;

	end:

	return 0;
}
