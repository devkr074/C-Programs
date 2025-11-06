#include <stdio.h>
int main()
{
    int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };
    printf("%d", matrix[0][2]);
    matrix[0][0] = 9;
    printf("%d", matrix[0][0]);
    int i, j;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\n", matrix[i][j]);
        }
    }
    int example[2][4][3];
    return 0;
}