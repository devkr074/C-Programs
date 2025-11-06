#include <stdio.h>
int main()
{
    int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};
    float avg, sum = 0;
    int i;
    int length = sizeof(ages) / sizeof(ages[0]);
    for (i = 0; i < length; i++) {
        sum += ages[i];
    }
    avg = sum / length;
    printf("The average age is: %.2f", avg);
    length = sizeof(ages) / sizeof(ages[0]);
    int lowestAge = ages[0];
    for (i = 0; i < length; i++) {
        if (lowestAge > ages[i]) {
            lowestAge = ages[i];
        }
    }
    int myNumbers[] = {3, -1, 7, 0, 9};
    length = sizeof(myNumbers) / sizeof(myNumbers[0]);
    for (i = 0; i < length; i++) {
        if (myNumbers[i] < 0) {
            continue;
        }
        if (myNumbers[i] == 0) {
            break;
        }
        printf("%d\n", myNumbers[i]);
    }
    return 0;
}