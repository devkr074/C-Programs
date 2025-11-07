#include <stdio.h>
int main()
{
    int myNum;
    printf("Type a number: \n");
    scanf("%d", &myNum);
    printf("Your number is: %d", myNum);
    char myChar;
    printf("Type a number AND a character and press enter: \n");
    scanf("%d %c", &myNum, &myChar);
    printf("Your number is: %d\n", myNum);
    printf("Your character is: %c\n", myChar);
    char firstName[30];
    printf("Enter your first name: \n");
    scanf("%s", firstName);
    printf("Hello %s", firstName);
    char fullName[30];
    printf("Type your full name: \n");
    fgets(fullName, sizeof(fullName), stdin);
    printf("Hello %s", fullName);
    return 0;
}