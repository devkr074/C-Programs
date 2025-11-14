#include <stdio.h>
#include <stdlib.h>
void sayHello() {
    printf("Hello from the callback!\n");
}
void runCallback(void (*callback)()) {
    printf("Before calling the callback...\n");
    callback();
    printf("After calling the callback.\n");
}
void addNumbers(int a, int b) {
    printf("The sum is: %d\n", a + b);
}
void calculate(void (*callback)(int, int), int x, int y) {
    callback(x, y);
}
void greetMorning() {
    printf("Good morning!\n");
}
void greetEvening() {
    printf("Good evening!\n");
}
void greet(void (*callback)()) {
    callback();
}
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}
int main() {
    runCallback(sayHello);
    calculate(addNumbers, 5, 3);
    greet(greetMorning);
    greet(greetEvening);
    int numbers[] = { 5, 2, 9, 1, 7 };
    int size = sizeof(numbers) / sizeof(numbers[0]);
    qsort(numbers, size, sizeof(int), compare);
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    return 0;
}