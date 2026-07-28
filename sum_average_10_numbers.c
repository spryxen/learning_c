#include <stdio.h>

int main(void) {

	int number, sum = 0, i = 1;
	double avg = 0;

	printf("Enter 10 positive numbers: ");

	while(i <= 10) {

		scanf("%d", &number);
	
		if(number < 0) {
			printf("Please enter positive number.\n");
			continue;
		}

		sum += number;

		i++;	
	} 
	
	avg = (double)sum / 10; 
	
	printf("The sum and average of given 10 positive numbers are : %d and %.2lf respectively.\n", sum, avg); 
	
	return 0; 

}
