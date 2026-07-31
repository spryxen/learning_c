#include <stdio.h>

int main(void) {

	char operation;
	int number1, number2;

	printf("Enter any two integer numbers: ");
	scanf("%d %d", &number1, &number2);

	printf("\nEnter the operator +, -, *, /, %%: ");
	scanf(" %c", &operation);

	switch(operation) {
	
		case '+':
			printf("%d + %d = %d\n", number1, number2, number1 + number2);
			break;
		case '-':
			printf("%d - %d = %d\n", number1, number2, number1 - number2);
			break;
		case '*':	
			printf("%d * %d = %d\n", number1, number2, number1 * number2);
			break;
		case '/':
			printf("%d / %d = %d\n", number1, number2, number1 / number2);
			break;
		case '%':
			printf("%d %% %d = %d\n", number1, number2, number1 % number2);
			break;
		default:
			printf("Wrong choice.\n");
	}

	return 0;
}
