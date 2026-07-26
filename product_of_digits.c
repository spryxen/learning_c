#include <stdio.h>

int main(void) {

	int number, prod = 1, temp;

	printf("Enter any number: ");
	scanf("%d", &number);

	temp = number;

	while(temp > 0) {
	
		prod *= temp % 10;
		temp /= 10;
	
	}

	printf("The product of digits of given number %d is %d.\n", number, prod);

	return 0;

}
