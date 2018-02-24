#include <stdio.h>
int main() {
    int a, b, c;
    int d = 10;
    float e;
    printf("Hello! This program will return the sum of 2 values!\n");
    printf("Enter value for A: ");
    scanf("%d", &a);
    printf("Enter value for B: ");
    scanf("%d", &b);
    c = a + b;
    printf("Sum is %d\n", c);

    e = 1.0 / 3;
    printf("%f", e);

    return 0;
}
