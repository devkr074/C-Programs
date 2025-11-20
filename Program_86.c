#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>
int main() {
    FILE *fptr = fopen("nothing.txt", "r");
    if (fptr == NULL) {
        printf("Error opening file.\\n");
        return 1;
    }
    fclose(fptr);
    FILE *f = fopen("nothing.txt", "r");
    if (f == NULL) {
        perror("Error opening file");
        return 1;
    }
    fclose(f);
    FILE *f = fopen("nothing.txt", "r");
    if (f == NULL) {
        printf("Error: %s\n", strerror(errno));
        return 1;
    }
    fclose(f);
    FILE *f = fopen("nothing.txt", "r");
    if (f == NULL) {
        if (errno == ENOENT) {
            printf("The file was not found.\n");
        } else {
            printf("Some other file error occurred.\n");
        }
        return 1;
    }
    fclose(f);
    FILE *f = fopen("nothing.txt", "r");
    if (f == NULL) {
        printf("Failed to open file.\n");
        exit(1);
    }
    fclose(f);
    FILE *f = fopen("nothing.txt", "r");
    if (f == NULL) {
        perror("Could not open nothing.txt");
        exit(EXIT_FAILURE);
    }
    fclose(f);
    return EXIT_SUCCESS;
    return 0;
}