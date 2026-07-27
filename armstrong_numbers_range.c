#include <stdio.h>
#include <math.h>

int main(void) {

	int lower_limit, upper_limit, temp1, temp2;

	printf("Enter the lower_limit & upper_limit of the range: ");
	scanf("%d %d", &lower_limit, &upper_limit);

	printf("The armstrong numbers from %d to %d range are:\n", lower_limit, upper_limit);

	for(lower_limit; lower_limit <= upper_limit; lower_limit++) {
	
		int i = 0, processed_number = 0, j;

		temp1 = lower_limit;
		temp2 = lower_limit;

		for(; temp1 > 0; temp1 /= 10) {
			i++;
		}

		for(j = 1; j <= i; j++) {
			processed_number += pow((temp2 % 10), i);
			temp2 /= 10;
		}

		if(processed_number == lower_limit) {
			printf("%d\n", lower_limit);
		}
		
	
	}

	return 0;
}
