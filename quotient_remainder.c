#include <stdio.h>

int main(void) {

  int dividend, divisior, quotient, remainder;

  printf("Enter dividend and quotient respectively: ");
  scanf("%d %d", &dividend, &divisior);

  if(!divisior) {
    printf("Divide by zero error.\n");
  }else {
    quotient = dividend / divisior;
    remainder = dividend % divisior;

    printf("Quotient = %d, Remainder = %d.\n", quotient, remainder);
  }

  return 0;

}
