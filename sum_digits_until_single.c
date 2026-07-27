#include <stdio.h>

int main(void) {

	int number, sum = 0, temp, count = 0;

	printf("Enter any number: ");
	scanf("%d", &number);

	temp = number;

 	while(temp != 0) {
	
		sum += temp % 10;
		temp /= 10;

		if(sum / 10 != 0 && temp == 0) {
			temp = sum;
			sum = 0;
		}

	}

	printf("The sum of digits of given number %d until the sum is reduced to 1 digit is %d.\n", number,  sum);
	return 0;
}
