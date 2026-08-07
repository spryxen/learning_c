#include <stdio.h>

int main(void) {
	
	int number1, number2, i = 1, j = 1, k = 1, temp, hcf = 0, lcm, candidate, lcm_found = 0;

	printf("Enter any two numbers: ");
	scanf("%d %d", &number1, &number2);

	if(number1 <= 0 || number2 <= 0) {
		goto invalid;
	}

	if(number2 > number1) {
		temp = number1;
		number1 = number2;
		number2 = temp;
	}

	for(i; i <= number2; i++) {

		if((number1 % i == 0) && (number2 % i == 0)) {

			hcf = i;

		}
	
	}

	while(!lcm_found) {
	
		candidate = number1 * j;

		while(!lcm_found) {

			if(number2 * k > candidate) {
				break;
			}else {
				if(candidate == number2 * k) {
					lcm = candidate;
					lcm_found = 1;
					break;
				}
			}

			k++;
		
		}

		j++;

	}
		
	printf("The HCF is %d\n", hcf);
	printf("The LCM is %d\n", lcm);

	goto end;


	invalid:
		printf("Please Enter positive and non-zero number.\n");

	end:
	
	return 0;

}
