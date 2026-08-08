/*
 
5
4 4
3 3 3
2 2 2 2
1 1 1 1 1
 
*/


#include <stdio.h>

int main(void) {

	for(int i = 5; i > 0; i--) {

		for(int j = 5; j >= i; j--) {

			printf("%d ", i);

		}	

		printf("\n");
	
	}

	return 0;
}
