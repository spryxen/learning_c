#define FORMULA ((temp_in_cel * (9.0 / 5.0)) + 32)

#include <stdio.h>

int main(void) {

  double temp_in_cel, temp_in_fah;

  printf("Enter temperature in celsius: ");
  scanf("%lf", &temp_in_cel);

  temp_in_fah = FORMULA;

  printf("%.2lf \u00B0C is %.2lf \u00B0F\n", temp_in_cel, temp_in_fah);
  
  return 0;

}
