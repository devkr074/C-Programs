#include <stdio.h>
int main()
{
    int myNum = 100 + 50;
    int sum1 = 100 + 50;
    int sum2 = sum1 + 250;
    int sum3 = sum2 + sum2;
    printf("My Number: %d\n", myNum);
    printf("Sum1: %d\n", sum1);
    printf("Sum2: %d\n", sum2);
    printf("Sum3: %d\n", sum3);
    return 0;
}