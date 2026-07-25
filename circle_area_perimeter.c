#define PI (3.14159)
#define CIRCLE_PERIMETER ((2 * PI * r))
#define CIRCLE_AREA ((PI * r * r))

#include <stdio.h>

int main(void) {

  double r, area_of_circle, perimeter_of_circle;

  printf("Enter the radius of a circle: ");
  scanf("%lf", &r);

  area_of_circle = CIRCLE_AREA;
  perimeter_of_circle = CIRCLE_PERIMETER;

  printf("Area = %.2lf, Perimeter = %.2lf\n", area_of_circle, perimeter_of_circle);

  return 0;

}
