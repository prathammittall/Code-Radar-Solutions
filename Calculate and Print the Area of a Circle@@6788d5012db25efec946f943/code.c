#include <stdio.h>

int main() {
    float radius;
    scanf("%f", &radius);

    float r2 = radius*radius;

    printf("Area: %.2f", r2*3.14);

    return 0;
}