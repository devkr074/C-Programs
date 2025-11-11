#include <stdio.h>
int main()
{
    int myNumbers[4] = {25, 50, 75, 100};
    int *p = myNumbers;
    printf("%d\n", *p);
    printf("%d\n", *(p + 1));
    printf("%d\n", *(p + 2));
    printf("%d\n", *(p + 3));
    myNumbers[3] = {10, 20, 30};
    *p = myNumbers;
    printf("%d\n", *p);
    p++;
    printf("%d\n", *p);
    p--;
    printf("%d\n", *p);
    p += 2;
    printf("%d\n", *p);
    myNumbers[5] = {10, 20, 30, 40, 50};
    int *start = &myNumbers[1];
    int *end = &myNumbers[4];
    printf("%ld\n", end - start);
    myNumbers[2] = {1, 2};
    char letters[] = "Hi";
    int *pi = myNumbers;
    char *pc = letters;
    printf("%p\n", (void*)pi);
    printf("%p\n", (void*)(pi + 1));
    printf("%p\n", (void*)(pi + 2));
    printf("%p\n", (void*)pc);
    printf("%p\n", (void*)(pc + 1));
    myNumbers[4] = {25, 50, 75, 100};
    *p = myNumbers;
    for (int i = 0; i < 4; i++) {
        printf("%d\n", *p);
        p++;
    }
    return 0;
}