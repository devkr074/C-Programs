#include <stdio.h>
void myFunction() {
    int *ptr;
    ptr = malloc(sizeof(*ptr));
}
int main() {
    int *ptr;
    ptr = malloc(sizeof(*ptr));
    free(ptr);
    ptr = NULL;
    int *ptr;
    ptr = malloc(sizeof(*ptr));
    if (ptr == NULL) {
        printf("Unable to allocate memory");
        return 1;
    }
    *ptr = 20;
    printf("Integer value: %d\n", *ptr);
    free(ptr);
    ptr = NULL;
    int x = 5;
    int *ptr;
    ptr = calloc(2, sizeof(*ptr));
    ptr = &x;
    myFunction();
    printf("The function has ended");
    int* ptr;
    ptr = malloc(sizeof(*ptr));
    ptr = realloc(ptr, 2*sizeof(*ptr));
    return 0;
}