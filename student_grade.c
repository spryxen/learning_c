/* The method of assigning grade is
 * percentage >= 85            grade = 'A'
 * percentage >= 70            grade = 'B'
 * percentage >= 55            grade = 'C'
 * percentage >= 40            grade = 'D'
 * percentage < 40             grade = 'E'
 */

#include <stdio.h>

int main(void) {

  double mark1, mark2, mark3, mark4, total, percentage;
  char grade;

  printf("Enter the marks of 4 subjects respectively: ");
  scanf("%lf %lf %lf %lf", &mark1, &mark2, &mark3, &mark4);

  percentage = ((total = mark1 + mark2 + mark3 + mark4), ((total/400) * 100));

  if(percentage >= 85) {
    grade = 'A';
  }else if(percentage >= 70) {
    grade = 'B';
  }else if(percentage >= 55) {
    grade = 'C';
  }else if(percentage >= 40) {
    grade = 'D';
  }else {
    grade = 'E';
  }

  printf("The percentage obtained is %.2lf and grade obtained is %c.\n", percentage, grade);

  return 0;

}
