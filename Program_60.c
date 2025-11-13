#include <stdio.h>
void myFunction();
int myFunction2(int x, int y);
void myFunction3();
void myOtherFunction();
int main() {
    myFunction();
    int result = myFunction2(5, 3);
    printf("Result is = %d", result);
    myFunction3();
    return 0;
}
void myFunction() {
    printf("I just got executed!");
}
int myFunction2(int x, int y) {
    return x + y;
}
void myFunction3() {
    printf("Some text in myFunction\n");
    myOtherFunction();
}
void myOtherFunction() {
    printf("Hey! Some text in myOtherFunction\n");
}