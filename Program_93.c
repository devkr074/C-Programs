#include <stdio.h>
#define READ  1
#define WRITE 2
#define EXEC  4
int main() {
    int a = 6;
    int b = 3;
    int result;
    result = a & b;
    printf("Result: %d\n", result);
    result = a | b;
    printf("Result: %d\n", result);
    result = a ^ b;
    printf("Result: %d\n", result);
    result = ~a;
    printf("Result: %d\n", result);
    result = a << 2;
    printf("Result: %d\n", result);
    result = a >> 2;
    printf("Result: %d\n", result);
    int permissions = READ | WRITE;
    if (permissions & READ) {
        printf("Read allowed\n");
    }
    if (permissions & WRITE) {
        printf("Write allowed\n");
    }
    if (permissions & EXEC) {
        printf("Execute allowed\n");
    }
    return 0;
}