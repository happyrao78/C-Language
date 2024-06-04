#include <stdio.h>

int main() {
    int a = 10, b = 20;
    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Size of float: %lu bytes\n", sizeof(float));
    printf("Size of double: %lu bytes\n", sizeof(double));
    printf("Size of char: %lu bytes\n", sizeof(char));
    printf("Size of short: %lu bytes\n", sizeof(short));
    printf("Size of long: %lu bytes\n", sizeof(long));
    printf("Size of long long: %lu bytes\n", sizeof(long long));
    printf("Size of a + b > 30 ? 1 : 0: %lu bytes\n", sizeof(a + b > 30 ? 1 : 0));
    return 0;
}
