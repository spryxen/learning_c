#include <stdio.h>

int main(void) {

	int number1, number2, sum = 0, temp1 = 0, temp2 = 0;

	printf("Enter any two numbers: ");
	scanf("%d %d", &number1, &number2);

	if(number1 == 0 || number2 == 0) {
		printf("%d * %d = %d", number1, number2, sum);
	}else {
		temp1 = number1;
		temp2 = number2;

		while(temp1 > 0) {
			if(temp1 % 2 != 0) 
				sum += temp2;
			
			temp1 /= 2;
			temp2 += temp2;
		}

		printf("%d * %d = %d\n", number1, number2, sum);
	}
	
	return 0;
}
