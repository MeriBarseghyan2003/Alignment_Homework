#include <stdio.h>

struct MyPackedStruct {
    char a;
    int b;
    double c;
};

int main() {
    struct MyPackedStruct s;

    printf("Size of MyPackedStruct: %lu bytes\n", sizeof(s));
    printf("Address of a: %p\n", (void*)&s.a);
    printf("Address of b: %p\n", (void*)&s.b);
    printf("Address of c: %p\n", (void*)&s.c);

    return 0;
}
