#include <stdio.h>
void myFunction(char name[])
{
    printf("Hello %s\n", name);
}
void myFunction2(char name[], int age)
{
    printf("Hello %s. You are %d years old.\n", name, age);
}
void calculateSum(int x, int y)
{
    int sum = x + y;
    printf("The sum of %d + %d is: %d\n", x, y, sum);
}
void myFunction3(int myNumbers[5])
{
    for (int i = 0; i < 5; i++) {
        printf("%d\n", myNumbers[i]);
    }
}
int myFunction4(int x)
{
    return 5 + x;
}
int myFunction5(int x, int y)
{
    return x + y;
}
int calculateSum2(int x, int y)
{
    return x + y;
}
float toCelsius(float fahrenheit)
{
    return (5.0 / 9.0) * (fahrenheit - 32.0);
}
int main()
{
    myFunction("Liam");
    myFunction("Jenny");
    myFunction("Anja");
    myFunction2("Liam", 3);
    myFunction2("Jenny", 14);
    myFunction2("Anja", 30);
    calculateSum(5, 3);
    calculateSum(8, 2);
    calculateSum(15, 15);
    int myNumbers[5] = {10, 20, 30, 40, 50};
    myFunction3(myNumbers);
    printf("Result is: %d", myFunction4(3));
    printf("Result is: %d", myFunction5(5, 3));
    int result = myFunction5(5, 3);
    printf("Result is = %d", result);
    int result1 = calculateSum2(5, 3);
    int result2 = calculateSum2(8, 2);
    int result3 = calculateSum2(15, 15);
    printf("Result1 is: %d\n", result1);
    printf("Result2 is: %d\n", result2);
    printf("Result3 is: %d\n", result3);
    int resultArr[6];
    resultArr[0] = calculateSum2(5, 3);
    resultArr[1] = calculateSum2(8, 2);
    resultArr[2] = calculateSum2(15, 15);
    resultArr[3] = calculateSum2(9, 1);
    resultArr[4] = calculateSum2(7, 7);
    resultArr[5] = calculateSum2(1, 1);
    for (int i = 0; i < 6; i++) {
        printf("Result%d is = %d\n", i + 1, resultArr[i]);
    }
    float f_value = 98.8;
    float result = toCelsius(f_value);
    printf("Fahrenheit: %.2f\n", f_value);
    printf("Convert Fahrenheit to Celsius: %.2f\n", result);
    return 0;
}