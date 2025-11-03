#include <stdio.h>
int main()
{
    int a = 200;
    int b = 33;
    int c = 500;
    if (a > b && c > a) {
        printf("Both conditions are true\n");
    }
    a = 200;
    b = 33;
    c = 500;
    if (a > b || a > c) {
        printf("At least one condition is true\n");
    }
    a = 33;
    b = 200;
    if (!(a > b)) {
        printf("a is NOT greater than b\n");
    }
    bool isLoggedIn = true;
    bool isAdmin = false;
    int securityLevel = 3;
    if (isLoggedIn && (isAdmin || securityLevel <= 2)) {
        printf("Access granted\n");
    } else {
        printf("Access denied\n");
    }
    return 0;
}