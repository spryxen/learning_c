#include <stdio.h>

int main(void) {

	int year, month, day, isLeap = 0, valid_date = 0, i = 1, no_of_days = 0;
	
	printf("Enter date in 'yyyy-mm-dd' format: ");
	scanf("%d-%d-%d", &year, &month, &day);

	if(year > 0 && (month > 0 && month <= 12) && (day > 0 && day <= 31)){
		if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
			isLeap = 1;
		}
		goto valid_date;
	}else {
		goto end;
	}

	valid_date:

		switch(month) {

			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				if(day <= 31) {
					valid_date = 1;
					break;
				}
			case 4:
			case 6:
			case 9:
			case 11:
				if(day <= 30) {
					valid_date = 1;
					break;
				}
			case 2:
				if(isLeap && day <= 29){
					valid_date = 1;
				}else if(day <= 28) {
					valid_date = 1;
				}
		}


	number_of_days:

		while(i < month) {
		
			switch(i) {

				case 1:
				case 3:
				case 5:
				case 7:
				case 8:
				case 10:
				case 12:
					no_of_days += 31;
					i++;
					continue;
				case 4:
				case 6:
				case 9:
				case 11:
					no_of_days += 30;
					i++;
					continue;
				case 2:
					if(isLeap && day <= 29){
						no_of_days += 29;
						i++;
						continue;
					}else if(day <= 28) {
						no_of_days += 28;
						i++;
						continue;
					}
			
			}

		}

			no_of_days = (no_of_days - 1) + day;

	 week_day:
	
		switch(no_of_days %= 7) {
	
			case 0:
				printf("The day of the week is 'Thrusday'.\n");
				break;
			case 1:
				printf("The day of the week is 'Friday'.\n");
				break;
			case 2:	
				printf("The day of the week is 'Saturday'.\n");
				break;
			case 3:	
				printf("The day of the week is 'Sunday'.\n");
				break;
			case 4:	
				printf("The day of the week is 'Monday'.\n");
				break;
			case 5:
				printf("The day of the week is 'Tuesday'.\n");
				break;
			case 6:	
				printf("The day of the week is 'Wednesday'.\n");
				break;

		}


	end:
		if(!valid_date) 
			printf("Invalid Date.\n");

	return 0;
}

