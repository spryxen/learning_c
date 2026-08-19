#include <stdio.h>

int main(void) {

    int x = 8;

    printf("x = %d\n", x);
    printf("x = %d\n", ++x); /* Prefix Increment */
    printf("x = %d\n", x);
    printf("x = %d\n", --x); /* Prefix Decrement */
    printf("x = %d\n", x);

    return 0;
}