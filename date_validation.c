#include <stdio.h>

int main(void) {

	int year, month, day, isLeap = 0, valid_date = 0;

	printf("Enter date in 'yyyy-mm-dd' format: ");
	scanf("%d-%d-%d", &year, &month, &day);

	if(year > 0 && (month > 0 && month <= 12) && (day > 0 && day <= 31)) {

		if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
			isLeap = 1;
		}

		goto day_check;

	}else{
		goto end;
	}

	day_check:
	
		switch(month) {

			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				if(day <= 31) 
					valid_date = 1;
					break;
			case 4:
			case 6:
			case 9:
			case 11:
				if(day <= 30) 
					valid_date = 1;
					break;
			case 2:
				if(isLeap && day <= 29){
					valid_date = 1;
					break;
				}else if(day <= 28) {
					valid_date = 1;
					break;
				}
		}

	end:
		if(!valid_date) 
			printf("Invalid date.\n");
		else
			printf("Valid date.\n");
		

	return 0;
}
