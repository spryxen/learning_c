/* 
 
5
5 4
5 4 3
5 4 3 2
5 4 3 2 1

*/

#include <stdio.h>

int main(void) {

	for(int i = 5; i > 0; i--) {
	
		for(int j = 5; j >= i; j--) {

			printf("%d ", j);
			
		} 
	
		printf("\n");
	
	}

	return 0;
}
