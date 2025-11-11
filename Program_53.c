#include <stdio.h>
int main()
{
    int myAge = 43;
    printf("%d", myAge);
    printf("%p", &myAge);
    int* ptr = &myAge;
    printf("%p\n", ptr);
    printf("%d\n", *ptr);
    return 0;
}