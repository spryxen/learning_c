#include <stdio.h>

int main(void) {

  int number1, number2;

  printf("Enter any two numbers: ");
  scanf("%d %d", &number1, &number2);

  if(number1 > number2) {

    printf("The larger number is %d\n", number1);

  }else {

    printf("The larger number is %d\n", number2);

  }


  return 0;

}
