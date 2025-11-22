#include <stdio.h>
void count() {
    static int myNum = 0;
    myNum++;
    printf("num = %d\n", myNum);
}
extern int shared;
int main() {
    auto int x = 50;
    printf("%d\n", x);
    count();
    count();
    count();
    register int counter = 0;
    printf("Counter: %d\n", counter);
    printf("shared = %d\n", shared);
    return 0;
}