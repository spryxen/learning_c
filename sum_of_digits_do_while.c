#include <stdio.h>

int main(void) {

	int number, temp, sum = 0;

	printf("Enter any number: ");
	scanf("%d", &number);

	temp = number;

	do {
		
		sum += temp % 10;
		temp /= 10;
	
	}while(temp > 0);

	printf("The sum of digits of given number %d is %d.\n", number, sum);

	return 0;

}
