#include <stdio.h>

int main(void) {

  int number1, number2, result;

  printf("Enter any two numbers: ");
  scanf("%d%d", &number1, &number2);

  result = (number1 > number2) ? number1 : number2;

  printf("The larger number is: %d\n", result);

  return 0;

}
