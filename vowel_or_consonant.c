#include <stdio.h>
#include <ctype.h>

int main (void) {

	char alphabet;

	printf("Enter any alphabet: ");
	scanf("%c", &alphabet);

	switch(tolower(alphabet)) {

		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			printf("The entered '%c' alphabet is vowel.\n", alphabet);
			break;
		default:
			if(isalpha(alphabet)) 
				printf("The entered '%c' alphabet is consonant.\n", alphabet);
			else
				printf("Wrong Choice.\n");
	}


	return 0;
}
