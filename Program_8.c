#include <stdio.h>
int main()
{
    int x = 5, y = 6, z = 50;
    printf("%d", x + y + z);
    x = y = z = 50;
    printf("%d", x + y + z);
    return 0;
}