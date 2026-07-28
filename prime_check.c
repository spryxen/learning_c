#include <stdio.h>


int main(void) {

	int number, i, isPrime = 1;

	printf("Enter any number: ");
	scanf("%d", &number);

	if(number <= 1) {
		printf("Not prime number.\n");
	}else {
	
		for(i = 2; i < number; i++) {
			
			if(number % i == 0) {
				isPrime = 0;
				break;
			}
		}
		
		if(isPrime == 0) {
			printf("The number %d is not a prime number.\n", number);
		}else {
			printf("The number %d is a prime number.\n", number);
		}
	}

	return 0;
}
