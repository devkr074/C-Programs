#include <stdio.h>
int main()
{
    int i;
    for (i = 0; i < 5; i++) {
        printf("%d\n", i);
    }
    for (i = 0; i <= 10; i = i + 2) {
        printf("%d\n", i);
    }
    int sum = 0;
    for (i = 1; i <= 5; i++) {
        sum = sum + i;
    }
    printf("Sum is %d", sum);
    for (i = 5; i > 0; i--) {
        printf("%d\n", i);
    }
    return 0;
}