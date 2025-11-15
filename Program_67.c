#include <stdio.h>
int main() {
    FILE *fptr;
    fptr = fopen("filename.txt", "w");
    fprintf(fptr, "Some text");
    fprintf(fptr, "Hello World!");
    fptr = fopen("filename.txt", "a");
    fprintf(fptr, "\nHi everybody!");
    fclose(fptr);
    return 0;
}