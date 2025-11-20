#include <stdio.h>
#include <stdlib.h>
int main() {
    int x = 10;
    int y = 0;
    printf("Before division\n");
    int z = x / y;
    printf("After division\n");
    int x = 10;
    int y = 5;
    int result = x - y;
    printf("Result: %d\n", result);
    int x = 10;
    int y = 0;
    printf("Before division\n");
    if (y != 0) {
        int z = x / y;
        printf("Result: %d\n", z);
    } else {
        printf("Error: Division by zero!\n");
    }
    printf("After division\n");
    int numbers[3] = {10, 20, 30};
    int index = 5;
    printf("Index = %d\n", index);
    if (index >= 0 && index < 3) {
        printf("Value = %d\n", numbers[index]);
    } else {
        printf("Error: Index out of bounds!\n");
    }
    return 0;
}