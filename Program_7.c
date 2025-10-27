#include <stdio.h>
int main()
{
    int myNum = 15;
    myNum = 10;
    int myOtherNum = 23;
    myNum = myOtherNum;
    printf("%d", myNum);
    myOtherNum = myNum;
    printf("%d", myOtherNum);
    int x = 5;
    int y = 6;
    int sum = x + y;
    printf("%d", sum);
    return 0;
}