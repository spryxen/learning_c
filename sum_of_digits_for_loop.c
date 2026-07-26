#include <stdio.h>


int main(void) {

	int number, temp, sum = 0;

	printf("Enter any number: ");
	scanf("%d", &number);

	temp = number;

	for(temp; temp > 0; temp /= 10) {
		sum += temp % 10;
	}

	printf("The sum of digits of given number %d is %d.\n", number, sum);

	return 0;
}
