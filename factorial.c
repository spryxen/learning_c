#include <stdio.h> 

int main(void) {

	int number, factorial = 1, temp;

	printf("Enter any number: ");
	scanf("%d", &number);

	temp = number;

	while(temp > 0) {
	
		factorial *= temp;
		temp--;
	
	}

	printf("The factorial of given number %d is %d.\n", number, factorial);

	return 0;
}


