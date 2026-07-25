#include <stdio.h> 

int main(void) {

  int number1, number2, number3, biggest_number;

  printf("Enter three numbers: ");
  scanf("%d %d %d", &number1, &number2, &number3);

  biggest_number = (number1 > number2 ? number1 : number2);

  if(biggest_number > number3) {
    printf("The biggest number is %d\n", biggest_number);
  }else {
    printf("The biggest number is %d\n", number3);
  }

  return 0;

}
