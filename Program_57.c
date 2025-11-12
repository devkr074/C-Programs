#include <stdio.h>
void myFunction()
{
    printf("I just got executed!");
}
void calculateSum()
{
    int x = 5;
    int y = 10;
    int sum = x + y;
    printf("The sum of x + y is: %d", sum);
}
int main()
{
    myFunction();
    myFunction();
    myFunction();
    calculateSum();
    return 0;
}