struct Example {
    char a;
    int b;
    char c;
};
struct S {
    char a;
    int b;
    char c;
};
union U {
    char a;
    int b;
    char c;
};
int main() {
    printf("Size of struct: %zu bytes\n", sizeof(struct Example));
    printf("Struct size: %zu\n", sizeof(struct S));
    printf("Union size: %zu\n", sizeof(union U));
    return 0;
}