#include <stdio.h>
int add(int a, int b) {
    return a + b;
}
void greetMorning() {
    printf("Good morning!\n");
}
void greetEvening() {
    printf("Good evening!\n");
}
void greet(void (*func)()) {
    func();
}
void add() {
    printf("Add\n");
}
void subtract() {
    printf("Subtract\n");
}
void multiply() {
    printf("Multiply\n");
}
void add2(int a, int b) {
    printf("Result: %d\n", a + b);
}
void subtract2(int a, int b) {
    printf("Result: %d\n", a - b);
}
void multiply2(int a, int b) {
    printf("Result: %d\n", a * b);
}
int main() {
    int (*ptr)(int, int) = add;
    int result = ptr(5, 3);
    printf("Result: %d", result);
    greet(greetMorning);
    greet(greetEvening);
    void (*operations[3])() = { add, subtract, multiply };
    for (int i = 0; i < 3; i++) {
        operations[i]();
    }
    int choice, x = 10, y = 5;
    void (*operations[3])(int, int) = { add2, subtract2, multiply2 };
    printf("x = %d, y = %d\n\n", x, y);
    printf("Choose an operation:\n");
    printf("0: Add\n1: Subtract\n2: Multiply\n");
    scanf("%d", &choice);
    if (choice >= 0 && choice < 3) {
        operations[choice](x, y);
    } else {
        printf("Invalid choice!\n");
    }
    return 0;
}