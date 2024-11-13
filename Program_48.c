// Reading a File in C

#include <stdio.h>
int main()
{
    FILE *pF = fopen("test.txt", "r");
    char buffer[255];
    if (pF == NULL)
    {
        printf("Unable to Open File");
    }
    else
    {
        while (fgets(buffer, 255, pF) != NULL)
        {
            printf("%s", buffer);
        }
    }
    fclose(pF);
    return 0;
}