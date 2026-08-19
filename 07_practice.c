#include <stdio.h>

int main(void) {

    int a, b, temp;

    printf("Enter values for a and b : ");
    scanf("%d%d", &a, &b);

    temp = a, a = b, b = temp;

    printf("After interchanging a = %d & b = %d\n", a, b);

    return 0;
}