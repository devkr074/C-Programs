struct Car {
    char brand[30];
    int year;
};
void updateYear(struct Car *c) {
    c->year = 2025;
}
int main() {
    struct Car car = {"Toyota", 2020};
    struct Car *ptr = &car;
    printf("Brand: %s\n", ptr->brand);
    printf("Year: %d\n", ptr->year);
    struct Car myCar = {"Toyota", 2020};
    updateYear(&myCar);
    printf("Brand: %s\n", myCar.brand);
    printf("Year: %d\n", myCar.year);
    return 0;
}