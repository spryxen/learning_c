#include <stdio.h>
#include <math.h>

int main(void) {

	double amount, temp = 0;
	int count_1000 = 0, count_500 = 0, count_100 = 0, count_50 = 0, count_20 = 0, count_10 = 0, count_5 = 0, count_1 = 0, count_paisa = 0;

	printf("Enter the amount: Rs. ");
	scanf("%lf", &amount);

	temp = amount;

	while(temp > 0) {


		if(temp >= 1000){
			count_1000 = temp / 1000;
			temp = fmod(temp, 1000);
		}else if(temp >= 500){
			count_500 = temp / 500;
			temp = fmod(temp, 500);
		}else if(temp >= 100){
			count_100 = temp / 100;
			temp = fmod(temp, 100);
		}else if(temp >= 50){
			count_50 = temp / 50;
			temp = fmod(temp, 50);
		}else if(temp >= 20){
			count_20 = temp / 20;
			temp = fmod(temp, 20);
		}else if(temp >= 10){
			count_10 = temp / 10;
			temp = fmod(temp, 10);
		}else if(temp >= 5){
			count_5 = temp / 5;
			temp = fmod(temp, 5);
		}else if(temp >= 1){
			count_1 = temp / 1;
			temp = fmod(temp, 1);
		}else{ 
			count_paisa = (int)round(temp * 100);

			temp = 0;
		}
	}
	
	printf("The notes required are:\n");
	printf("1000 = %d\n500 = %d\n100 = %d\n50 = %d\n20 = %d\n10 = %d\n5 = %d\n1 = %d\ncoin paisa = %d\n", count_1000, count_500, count_100, count_50, count_20, count_10, count_5, count_1, count_paisa);
	return 0;
}
