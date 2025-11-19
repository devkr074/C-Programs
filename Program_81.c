#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Car {
    char brand[50];
    int year;
};
int main() {
    struct Car *ptr = (struct Car*) malloc(sizeof(struct Car));
    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    strcpy(ptr->brand, "Honda");
    ptr->year = 2022;
    printf("Brand: %s\n", ptr->brand);
    printf("Year: %d\n", ptr->year);
    free(ptr);
    struct Car *cars = (struct Car*) malloc(3 * sizeof(struct Car));
    if (cars == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    strcpy(cars[0].brand, "Ford");
    cars[0].year = 2015;
    strcpy(cars[1].brand, "BMW");
    cars[1].year = 2018;
    strcpy(cars[2].brand, "Volvo");
    cars[2].year = 2023;
    for (int i = 0; i < 3; i++) {
        printf("%s - %d\n", cars[i].brand, cars[i].year);
    }
    free(cars);
    int count = 2;
    struct Car *cars = (struct Car*) malloc(count * sizeof(struct Car));
    if (cars == NULL) {
        printf("Initial allocation failed.\n");
        return 1;
    }
    strcpy(cars[0].brand, "Toyota"); cars[0].year = 2010;
    strcpy(cars[1].brand, "Audi");   cars[1].year = 2019;
    int newCount = 3;
    struct Car *tmp = (struct Car*) realloc(cars, newCount * sizeof(struct Car));
    if (tmp == NULL) {
        free(cars);
        printf("Reallocation failed.\n");
        return 1;
    }
    cars = tmp;
    strcpy(cars[2].brand, "Kia");
    cars[2].year = 2022;
    for (int i = 0; i < newCount; i++) {
        printf("%s - %d\n", cars[i].brand, cars[i].year);
    }
    free(cars);
    return 0;
}