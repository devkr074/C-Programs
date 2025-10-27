#include <stdio.h>
int main()
{
    int myNum = 15;
    float myFloatNum = 5.99;
    char myLetter = 'D';
    printf("%d\n", myNum);
    printf("%f\n", myFloatNum);
    printf("%c\n", myLetter);
    printf("My favorite number is: %d", myNum);
    printf("My number is %d and my letter is %c", myNum, myLetter);
    printf("My favorite number is: %d", 15);
    printf("My favorite letter is: %c", 'D');
    return 0;
}