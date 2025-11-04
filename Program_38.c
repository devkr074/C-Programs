#include <stdio.h>
int main()
{
    int countdown = 3;
    while (countdown > 0) {
        printf("%d\n", countdown);
        countdown--;
    }
    printf("Happy New Year!!\n");
    int i = 0;
    while (i <= 10) {
        printf("%d\n", i);
        i += 2;
    }
    int numbers = 12345;
    int revNumbers = 0;
    while (numbers) {
        revNumbers = revNumbers * 10 + numbers % 10;
        numbers /= 10;
    }
    int dice = 1;
    while (dice <= 6) {
        if (dice < 6) {
            printf("No Yatzy\n");
        } else {
            printf("Yatzy!\n");
        }
        dice = dice + 1;
    }
    return 0;
}