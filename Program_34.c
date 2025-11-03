#include <stdio.h>
int main()
{
    int doorCode = 1337;
    if (doorCode == 1337) {
        printf("Correct code.\nThe door is now open.");
    } else {
        printf("Wrong code.\nThe door remains closed.");
    }
    int myNum = 10;
    if (myNum > 0) {
        printf("The value is a positive number.");
    } else if (myNum < 0) {
        printf("The value is a negative number.");
    } else {
        printf("The value is 0.");
    }
    int myAge = 25;
    int votingAge = 18;
    if (myAge >= votingAge) {
        printf("Old enough to vote!");
    } else {
        printf("Not old enough to vote.");
    }
    int age = 20;
    bool isCitizen = true;
    if (age >= 18) {
        printf("Old enough to vote.\n");
        if (isCitizen) {
            printf("And you are a citizen, so you can vote!\n");
        } else {
            printf("But you must be a citizen to vote.\n");
        }
    } else {
        printf("Not old enough to vote.\n");
    }
    myNum = 5;
    if (myNum % 2 == 0) {
        printf("%d is even.\n", myNum);
    } else {
        printf("%d is odd.\n", myNum);
    }
    int temperature = 30;
    if (temperature < 0) {
        printf("It's freezing!\n");
    } else if (temperature < 20) {
        printf("It's cool.\n");
    } else {
        printf("It's warm.\n");
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