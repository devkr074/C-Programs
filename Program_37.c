#include <stdio.h>
int main()
{
    int i = 0;
    do {
        printf("%d\n", i);
        i++;
    }
    while (i < 5);
    i = 10;
    do {
        printf("i is %d\n", i);
        i++;
    } while (i < 5);
    int number;
    do {
        printf("Enter a positive number: ");
        scanf("%d", &number);
    } while (number > 0);
    return 0;
}