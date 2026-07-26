#include <stdio.h>

int main(void) {

	int number, sum = 0, temp;

	printf("Enter any number: ");
	scanf("%d", &number);

	temp = number;

	while(temp > 0) {
	
		sum += temp % 10;
		temp /= 10;
		
	}

	printf("The sum of number of digits of the given number %d is %d.\n", number, sum);

}
