#include <stdio.h>
void myFunction() {
    int x = 5;
    printf("%d", x);
}
int x = 5;
void myFunction2() {
    printf("%d", x);
}
void myFunction3() {
    int x = 22;
    printf("%d\n", x);
}
void myFunction4() {
    printf("%d\n", ++x);
}
int main() {
    myFunction();
    myFunction2();
    printf("%d", x);
    myFunction3();
    printf("%d\n", x);
    myFunction4();
    printf("%d\n", x);
    return 0;
}