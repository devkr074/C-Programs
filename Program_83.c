#include <stdio.h>
#include <stdlib.h>
int main() {
    int x = 5
    printf("%d", x);
    printf("%d", myVar);
    int x = "Hello";
    int x = 10;
    int y = 0;
    int result = x / y;
    printf("%d\\n", result);
    int numbers[3] = {1, 2, 3};
    printf("%d\\n", numbers[8]);
    int* ptr = malloc(sizeof(int));
    *ptr = 10;
    free(ptr);
    printf("%d\\n", *ptr);
    return 0;
}