/*
 
1 1 1 1 1
2 2 2 2
3 3 3
2 2
1
 
*/


#include <stdio.h>

int main(void) {

	for(int i = 1; i <= 5; i++) {
	
		for(int j = 5; j >= i; j--) {

			if(i == 4) {
				printf("2 ");
			}else if(i == 5) {
				printf("1");
			}else {
				printf("%d ", i);
			}
	
		}

		printf("\n");

	}	

	return 0;
}
