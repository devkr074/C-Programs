#include <stdio.h>
int main()
{
    int myNumbers[4] = {25, 50, 75, 100};
    int i;
    for (i = 0; i < 4; i++) {
        printf("%d\n", myNumbers[i]);
    }
    for (i = 0; i < 4; i++) {
        printf("%p\n", &myNumbers[i]);
    }
    int myInt;
    printf("%zu", sizeof(myInt));
    printf("%zu", sizeof(myNumbers));
    printf("%p\n", myNumbers);
    printf("%p\n", &myNumbers[0]);
    printf("%d", *myNumbers);
    printf("%d\n", *(myNumbers + 1));
    printf("%d", *(myNumbers + 2));
    int *ptr = myNumbers;
    for (i = 0; i < 4; i++) {
        printf("%d\n", *(ptr + i));
    }
    *myNumbers = 13;
    *(myNumbers +1) = 17;
    printf("%d\n", *myNumbers);
    printf("%d\n", *(myNumbers + 1));
    return 0;
}