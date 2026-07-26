#include <stdio.h>

int main(void) {

	int number1, number2, multiplication = 0;

	printf("Enter any two positive numbers: ");
	scanf("%d %d", &number1, &number2);

	for(int i = 1; i <= number2; i++) {
	
		multiplication += number1;
		
	}

	printf("Their multliplication is %d.\n", multiplication);

	return 0;
}
