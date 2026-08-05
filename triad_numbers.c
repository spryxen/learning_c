#include <stdio.h>

int main(void) {

	long int lower_limit, upper_limit, temp1, temp2, once, twice, thrice, all_in_1 = 0, once_count = 0, twice_count = 0, thrice_count = 0, digit, remaining_digit, repetation_found = 0;
	
	printf("Enter the range for the triad numbers: ");
	scanf("%ld %ld", &lower_limit, &upper_limit);

	temp1 = lower_limit;
	temp2 = upper_limit;

	printf("The triad numbers from %d to %d are:\n\n" , temp1, temp2);
	
	for(temp1; temp1 <= temp2; temp1++) {

		once = temp1;
		twice = temp1 * 2;
		thrice = temp1 * 3;

		all_in_1 += once * 1000;
		all_in_1 += twice;
		all_in_1 *= 1000;
		all_in_1 += thrice;

		while(all_in_1 > 0) {

			digit = all_in_1 % 10;
			remaining_digit = all_in_1 / 10;
			
			for(remaining_digit; remaining_digit > 0; remaining_digit /= 10) {

				if(digit == (remaining_digit % 10)) {
					repetation_found = 1;
					break;
				}
		
			}

			if(repetation_found) {
				break;
			}else if((all_in_1 / 10) ==  0){
				while(once > 0) {
					once /= 10;
					once_count++;
				}

				while(twice > 0) {
					twice /= 10;
					twice_count++;
				}

				while(thrice > 0) {
					thrice /= 10;
					thrice_count++;
				}

				if(once_count == 3 && twice_count == 3 && thrice_count == 3) {
					once_count = 0;
					twice_count = 0;
					thrice_count = 0;
					printf("%ld\n", temp1);
				}
			}

			all_in_1 /= 10;
			
		}

		if(temp1 > 333) {
			break;
		}else {
			all_in_1 = 0;
			repetation_found = 0;
		}

	}

	return 0;
}
