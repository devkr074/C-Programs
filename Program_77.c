#include <stdio.h>
int main() {
    int students[20];
    printf("%zu", sizeof(students));
    int *ptr1 = malloc(size);
    int *ptr2 = calloc(amount, size);
    int *ptr3, *ptr4;
    ptr3 = malloc(sizeof(*ptr1));
    ptr4 = calloc(1, sizeof(*ptr2));
    int *students;
    int numStudents = 12;
    students = calloc(numStudents, sizeof(*students));
    printf("%d", numStudents * sizeof(*students));
    return 0;
}