#include <stdio.h>
#include <math.h>

int main(void) {

	int binary_number, decimal_number = 0, temp, power = 0, flag = 0;

	printf("Enter any binary number: ");
	scanf("%d", &binary_number);

	temp = binary_number;

	while(temp > 0) {

		if(temp%10 > 1) {	
		
			printf("Invalid binary number.\n");
			flag = 1;
			break;
		
		}
	
		decimal_number += (temp%10 * pow(2, power));
		temp /= 10;
		power++;
	
	}

	if(flag == 0) {
		printf("The decimal representation of %d binary number is %d.\n", binary_number, decimal_number);
	}

	return 0;

}
