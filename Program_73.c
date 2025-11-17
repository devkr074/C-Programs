#include <stdio.h>
typedef float Temperature;
typedef struct {
    char firstName[20];
    char lastName[20];
} Owner;
typedef struct {
    char brand[30];
    int year;
    Owner owner;
} Car;
typedef struct {
    char name[30];
    Car featuredCar;
} Dealership;
int main() {
    Temperature today = 25.5;
    Temperature tomorrow = 18.6;
    printf("Today: %.1f C\n", today);
    printf("Tomorrow: %.1f C\n", tomorrow);
    Owner person = {"John", "Doe"};
    Car car1 = {"Toyota", 2010, person};
    Dealership d = {"City Motors", car1};
    printf("Dealership: %s\n", d.name);
    printf("Featured Car: %s (%d), owned by %s %s\n", d.featuredCar.brand, d.featuredCar.year, d.featuredCar.owner.firstName, d.featuredCar.owner.lastName);
    return 0;
}