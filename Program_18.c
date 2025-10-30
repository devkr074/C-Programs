#include <stdio.h>
int main()
{
    int normalInt = 1000;
    double normalDouble = 3.14;
    short int small = -100;
    unsigned int count = 25;
    long int big = 1234567890;
    long long int veryBig = 9223372036854775807;
    unsigned long long int huge = 18446744073709551615U;
    long double precise = 3.141592653589793238L;
    printf("Normal int: %d\n", normalInt);
    printf("Normal double: %lf\n", normalDouble);
    printf("Small: %hd\n", small);
    printf("Count: %u\n", count);
    printf("Big: %ld\n", big);
    printf("Very Big: %lld\n", veryBig);
    printf("Huge: %llu\n", huge);
    printf("Precise: %Lf\n", precise);
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of double: %zu bytes\n", sizeof(double));
    printf("Size of short int: %zu bytes\n", sizeof(short int));
    printf("Size of unsigned int: %zu bytes\n", sizeof(unsigned int));
    printf("Size of long int: %zu bytes\n", sizeof(long int));
    printf("Size of long long int: %zu bytes\n", sizeof(long long int));
    printf("Size of unsigned long long int: %zu bytes\n", sizeof(unsigned long long int));
    printf("Size of long double: %zu bytes\n", sizeof(long double));
    return 0;
}