#include <stdio.h>
int sum(int k);
void countdown(int n);
int factorial(int n);
int main() {
    int result = sum(10);
    printf("%d", result);
    countdown(5);
    printf("Factorial of 5 is %d", factorial(5));
    return 0;
}
int sum(int k) {
    if (k > 0) {
        return k + sum(k - 1);
    } else {
        return 0;
    }
}
void countdown(int n) {
    if (n > 0) {
        printf("%d ", n);
        countdown(n - 1);
    }
}
int factorial(int n) {
    if (n > 1) {
        return n * factorial(n - 1);
    } else {
        return 1;
    }
}