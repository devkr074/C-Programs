#include <stdio.h>
#include <string.h>
int main() {
    int number;
    do {
        printf("Choose a number between 1 and 5: ");
        scanf("%d", &number);
        while (getchar() != '\n');
    } while (number < 1 || number > 5);
    printf("You chose: %d\n", number);
    char name[100];
    do {
        printf("Enter your name: ");
        fgets(name, sizeof(name), stdin);
        name[strcspn(name, "\n")] = 0;
    } while (strlen(name) == 0);
    printf("Hello, %s\n", name);
    int number;
    char input[100];
    printf("Enter a number: ");
    while (fgets(input, sizeof(input), stdin)) {
        if (sscanf(input, "%d", &number) == 1) {
            break;
        } else {
            printf("Invalid input. Try again: ");
        }
    }
    printf("You entered: %d\n", number);
    return 0;
}