#include <stdio.h>
#include "myfile.h"
#define PI 3.14
#define SQUARE(x) ((x) * (x))
#define DEBUG
int main() {
    printf("Value of PI: %.2f\n", PI);
    printf("Square of 4: %d\n", SQUARE(4));
    #ifdef DEBUG
    printf("Debug mode is ON\n");
    #endif
    return 0;
}