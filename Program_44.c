#include <stdio.h>
int main()
{
    int myNumbers[] = {10, 25, 50, 75, 100};
    printf("%zu", sizeof(myNumbers));
    int length = sizeof(myNumbers) / sizeof(myNumbers[0]);
    printf("%d", length);
    double myValues[] = {1.1, 2.2, 3.3};
    length = sizeof(myValues) / sizeof(myValues[0]);
    printf("%d", length);
    return 0;
}