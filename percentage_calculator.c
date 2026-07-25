#include <stdio.h> 

int main(void) {

  double mark1, mark2, mark3, mark4, mark5, total, percentage;

  printf("Enter marks obtained in 5 subjects:\n");
  scanf("%lf %lf %lf %lf %lf", &mark1, &mark2, &mark3, &mark4, &mark5);

  total = mark1 + mark2 + mark3 + mark4 + mark5;
  percentage = (total / 500) * 100;

  printf("The percentage obtained is %.2lf%%\n", percentage);

  return 0;

}
