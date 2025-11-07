#include <stdio.h>
#include <string.h>
int main()
{
    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("%zu", strlen(alphabet));
    printf("%zu\n", strlen(alphabet));
    printf("%zu\n", sizeof(alphabet));
    printf("%zu\n", strlen(alphabet));
    printf("%zu\n", sizeof(alphabet));
    char str1[20] = "Hello ";
    char str2[] = "World!";
    strcat(str1, str2);
    printf("%s", str1);
    str1[20] = "Hello World!";
    str2[20];
    strcpy(str2, str1);
    printf("%s", str2);
    str1[] = "Hello";
    str2[] = "Hello";
    char str3[] = "Hi";
    printf("%d\n", strcmp(str1, str2));
    printf("%d\n", strcmp(str1, str3));
    return 0;
}