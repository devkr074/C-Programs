#include <stdio.h>
int main()
{
    char greetings[] = "Hello World!";
    printf("%s", greetings);
    printf("%c", greetings[0]);
    greetings[0] = 'J';
    printf("%s", greetings);
    char carName[] = "Volvo";
    int i;
    for (i = 0; i < 5; ++i) {
        printf("%c\n", carName[i]);
    }
    int length = sizeof(carName) / sizeof(carName[0]);
    for (i = 0; i < length; ++i) {
        printf("%c\n", carName[i]);
    }
    greetings[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
    printf("%s", greetings);
    greetings[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
    char greetings2[] = "Hello World!";
    printf("%zu\n", sizeof(greetings));
    printf("%zu\n", sizeof(greetings2));
    char message[] = "Good to see you,";
    char fname[] = "John";
    printf("%s %s!", message, fname);
    return 0;
}