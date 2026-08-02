#include <stdio.h>

int main(void) {

	int year1, year2, month1, month2, day1, day2, valid_first_date = 0, valid_second_date = 0, first_date_year_leap = 0, second_date_year_leap = 0, temp = 0, diff_year = 0, diff_month = 0, diff_day = 0,
	days_in_month = 0, valid_date = 0;


	printf("Enter first date in 'yyyy-mm-dd' format:\n");
	scanf("%d-%d-%d", &year1, &month1, &day1);

	printf("Enter second date in 'yyyy-mm-dd' format:\n");
	scanf("%d-%d-%d", &year2, &month2, &day2);

	if(year1 > 0 && (month1 > 0 && month1 <= 12) && (day1 > 0 && day1 <= 31)) {

		if(year1 % 400 == 0 || (year1 % 4 == 0 && year1 % 100 != 0)) {
			first_date_year_leap = 1;
		}

		if(year2 > 0 && (month2 > 0 && month2 <= 12) && (day2 > 0 && day2 <= 31)) {
			if(year2 % 400 == 0 || (year2 % 4 == 0 && year2 % 100 != 0)) {
				second_date_year_leap = 1;
			}
			goto first_date_day_check;
		}
		
	}else {
		goto end;
	}

	first_date_day_check:
		
		switch(month1) {

			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				if(day1 <= 31)
					valid_first_date = 1;
					break;
			case 4:
			case 6:
			case 9:
			case 11:
				if(day1 <= 30)
					valid_first_date = 1;
					break;
			case 2:
				if(first_date_year_leap && day1 <= 29)
					valid_first_date = 1;
				else if(day1 <= 28)
					valid_first_date = 1;
		}

	second_date_day_check:
		
		switch(month2) {

			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				if(day2 <= 31)
					valid_second_date = 1;
					break;
			case 4:
			case 6:
			case 9:
			case 11:
				if(day2 <= 30)
					valid_second_date = 1;
					break;
			case 2:
				if(second_date_year_leap && day2 <= 29)
					valid_second_date = 1;
				else if(day2 <= 28)
					valid_second_date = 1;

		}

	if(valid_first_date && valid_second_date){
		valid_date = 1;
		goto date_diff;
	}else{
		goto end;
	}

	date_diff:
	
		if(year2 > year1 || (year2 == year1 && month2 > month1) || (year2 == year1 && month2 == month1 && day2 > day1)) {

			temp = year1;
			year1 = year2;
			year2 = temp;

			temp = month1;
			month1 = month2;
			month2 = temp;

			temp = day1;
			day1 = day2;
			day2 = temp;
		}

		if(month1 - 1 == 0 && day1 < day2) {
			temp = 12;
		}else {
			temp = month1 - 1;
		}

		switch(temp) {
	
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				days_in_month = 31;
				break;
			case 4:
			case 6:
			case 9:
			case 11:
				days_in_month = 30;
				break;
			case 2:
				if(first_date_year_leap)
					days_in_month = 29;
				else
					days_in_month = 28;
		}

		if(month1 < month2 && day1 > day2) {
			year1 -= 1;
			month1 += 12;

			diff_year = year1 - year2;
			diff_month = month1 - month2;
			diff_day = day1 - day2;
		}else if(day1 < day2 && month1 >= month2) {
			if(month1 - 1 < month2) {
				year1 -= 1;
				month1 += 12 - 1;
			}else {
				month1 -= 1;
		}

			day1 += days_in_month;

			diff_year = year1 - year2;
			diff_month = month1 - month2;
			diff_day = day1 - day2;

		}else if(month1 < month2 && day1 < day2){
			year1 -= 1;
			month1 += 12 - 1;
			day1 += days_in_month;

			diff_year = year1 - year2;
			diff_month = month1 - month2;
			diff_day = day1 - day2;
		}else {
			diff_year = year1 - year2;
			diff_month = month1 - month2;
			diff_day = day1 - day2;
		}
		

	end:
		if(!valid_date){
			printf("Invalid Date.\n");
		}else{
			printf("diff_year=%d, diff_month=%d, diff_day=%d.\n", diff_year, diff_month, diff_day);	
							
		}
			

	return 0;
}


