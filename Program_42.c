#include <stdio.h>
int main()
{
    int i;
    for (i = 0; i < 10; i++) {
        if (i == 4) {
            break;
        }
        printf("%d\n", i);
    }
    for (i = 0; i < 10; i++) {
        if (i == 4) {
            continue;
        }
        printf("%d\n", i);
    }
    for (i = 0; i < 6; i++) {
        if (i == 2) {
            continue;
        }
        if (i == 4) {
            break;
        }
        printf("%d\n", i);
    }
    i = 0;
    while (i < 10) {
        if (i == 4) {
            break;
        }
        printf("%d\n", i);
        i++;
    }
    i = 0;
    while (i < 10) {
        if (i == 4) {
            i++;
            continue;
        }
        printf("%d\n", i);
        i++;
    }
    int myNumbers[] = {3, -1, 7, 0, 9};
    int length = sizeof(myNumbers) / sizeof(myNumbers[0]);
    int i;
    for (i = 0; i < length; i++) {
        if (myNumbers[i] < 0) {
            continue;
        }
        if (myNumbers[i] == 0) {
            break;
        }
        printf("%d\n", myNumbers[i]);
    }
    return 0;
}