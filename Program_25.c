#include <stdio.h>
int main()
{
    int result1 = 2 + 3 * 4;
    int result2 = (2 + 3) * 4;
    printf("%d\n", result1);
    printf("%d\n", result2);
    result1 = 10 - 2 + 5;
    result2 = 10 - (2 + 5);
    printf("%d\n", result1);
    printf("%d\n", result2);
    return 0;
}