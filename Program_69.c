struct myStructure {
    int myNum;
    char myLetter;
    char myString[30];
};
struct Car {
    char brand[30];
    char model[30];
    int year;
};
int main() {
    struct myStructure s1;
    s1.myNum = 13;
    s1.myLetter = 'B';
    strcpy(s1.myString, "Some text");
    printf("My number: %d\n", s1.myNum);
    printf("My letter: %c\n", s1.myLetter);
    printf("My string: %s", s1.myString);
    struct myStructure s2 = {13, 'B', "Some text"};
    printf("%d %c %s", s2.myNum, s2.myLetter, s2.myString);
    struct myStructure s3;
    s3 = s2;
    s3.myNum = 30;
    s3.myLetter = 'C';
    strcpy(s3.myString, "Something else");
    printf("%d %c %s\n", s2.myNum, s2.myLetter, s2.myString);
    printf("%d %c %s\n", s3.myNum, s3.myLetter, s3.myString);
    struct Car car1 = {"BMW", "X5", 1999};
    struct Car car2 = {"Ford", "Mustang", 1969};
    struct Car car3 = {"Toyota", "Corolla", 2011};
    printf("%s %s %d\n", car1.brand, car1.model, car1.year);
    printf("%s %s %d\n", car2.brand, car2.model, car2.year);
    printf("%s %s %d\n", car3.brand, car3.model, car3.year);
    return 0;
}