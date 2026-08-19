#include <stdio.h>

int main() {

    int a, b, max;

    printf("Enter values of a and b : ");
    scanf("%d%d", &a, &b);

    max = (a > b) ? a : b;

    printf("Larger of %d and %d is %d\n", a, b, max);

    return 0;
}