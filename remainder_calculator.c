#include <stdio.h>

int main(void) {

  int number, remainder;

  printf("Enter any number: ");
  scanf("%d", &number);

  remainder = number % 3;

  printf("The remainder is %d\n", remainder);
  
  return 0;

}
