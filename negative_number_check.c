#include <stdio.h>

int main(void) {

  int number;

  printf("Enter a number: ");
  scanf("%d", &number);

  if(number < 0) {
    printf("You have entered negaitve number.\n");
  } else {
    printf("The entered nunber is %d.\n", number);
  }

  return 0;

}
