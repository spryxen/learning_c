/*
 
1
2  3
4  5  6
7  8  9  10
11 12 13 14 15

*/

#include <stdio.h>


int main(void) {

	int new_line_count = 1, i = 0, j;

	while(new_line_count <= 5) {
	
		for(j = 1; j <= new_line_count; j++) {
			
			printf("%d ", i+j);

		}

		printf("\n");
		i += new_line_count;
		new_line_count++;

	}


	return 0;
}
