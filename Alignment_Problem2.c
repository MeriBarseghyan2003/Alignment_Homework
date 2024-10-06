#include <stdio.h>

struct MyStruct1 {
    char a;
    int b;
    double c;
};

struct MyStruct2 {
    double c;
    int b;
    char a;
};

int main() {
    struct MyStruct1 s1;
    struct MyStruct2 s2;

    printf("Size of MyStruct1: %lu bytes\n", sizeof(s1));
    printf("Address of a: %p\n", (void*)&s1.a);
    printf("Address of b: %p\n", (void*)&s1.b);
    printf("Address of c: %p\n", (void*)&s1.c);

    printf("\nSize of MyStruct2: %lu bytes\n", sizeof(s2));
    printf("Address of c: %p\n", (void*)&s2.c);
    printf("Address of b: %p\n", (void*)&s2.b);
    printf("Address of a: %p\n", (void*)&s2.a);

    return 0;
}
