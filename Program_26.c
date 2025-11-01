#include <stdio.h>
#include <stdbool.h>
int main()
{
    bool isProgrammingFun = true;
    bool isFishTasty = false;
    printf("%d", isProgrammingFun);
    printf("%d", isFishTasty);
    printf("%d", 10 > 9);
    int x = 10;
    int y = 9;
    printf("%d", x > y);
    printf("%d", 10 == 10);
    printf("%d", 10 == 15);
    printf("%d", 5 == 55);
    bool isHamburgerTasty = true;
    bool isPizzaTasty = true;
    printf("%d", isHamburgerTasty == isPizzaTasty);
    return 0;
}