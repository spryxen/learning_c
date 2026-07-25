#include <stdio.h>

int main(void) {

  int decimal_integer;

  printf("Enter any number: ");
  scanf("%d", &decimal_integer);

  printf("Octal representaion = %o\n", decimal_integer);
  printf("Hexadecimal representation = %x\n", decimal_integer);

  return 0;

}
