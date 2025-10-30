#include <stdio.h>
int main()
{
    int x = 5;
    int y = 2;
    int sum = 5 / 2;
    printf("%d", sum);
    float myFloat = 9;
    printf("%f", myFloat);
    int myInt = 9.99;
    printf("%d", myInt);
    float sum = 5 / 2;
    printf("%f", sum);
    float sum = (float) 5 / 2;
    printf("%f", sum);
    int num1 = 5;
    int num2 = 2;
    float sum = (float) num1 / num2;
    printf("%f", sum);
    int num1 = 5;
    int num2 = 2;
    float sum = (float) num1 / num2;
    printf("%.1f", sum);
    int maxScore = 500;
    int userScore = 423;
    float percentage = (float) userScore / maxScore * 100.0;
    printf("User's percentage is %.2f", percentage);
    return 0;
}