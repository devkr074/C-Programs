#include <stdio.h>
int main()
{
    int myNum = 10;
    int *ptr = &myNum;
    int **pptr = &ptr;
    printf("myNum = %d\n", myNum);
    printf("*ptr = %d\n", *ptr);
    printf("**pptr = %d\n", **pptr);
    int myNum = 5;
    int *ptr = &myNum;
    int **pptr = &ptr;
    **pptr = 20;
    printf("myNum = %d\n", myNum);
    return 0;
}