#include <stdio.h>
int main()
{
    int myNumbers[] = {25, 50, 75, 100};
    printf("%d", myNumbers[0]);
    myNumbers[0] = 33;
    printf("%d", myNumbers[0]);
    int myNum[4];
    myNum[0] = 25;
    myNum[1] = 50;
    myNum[2] = 75;
    myNum[3] = 100;
    return 0;
}