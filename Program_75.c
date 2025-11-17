#include <stdio.h>
enum Level {
    LOW,
    MEDIUM,
    HIGH
};
enum Level2 {
    LOW = 25,
    MEDIUM = 50,
    HIGH = 75
};
enum Level3 {
    LOW = 5,
    MEDIUM,
    HIGH
};
typedef enum {MON, TUE, WED, THU, FRI, SAT, SUN} Day;
Day today = WED;
int main() {
    enum Level myVar = MEDIUM;
    enum Level2 myVar2 = MEDIUM;
    enum Level3 myVar3 = MEDIUM;
    printf("%d", myVar);
    printf("\n%d", myVar2);
    printf("\n%d", myVar3);
    switch (myVar) {
        case 1:
        printf("Low Level");
        break;
        case 2:
        printf("Medium level");
        break;
        case 3:
        printf("High level");
        break;
    }
    Day today = WED;
    if (today == WED) {
        printf("It is Wednesday!\n");
    }
    return 0;
}