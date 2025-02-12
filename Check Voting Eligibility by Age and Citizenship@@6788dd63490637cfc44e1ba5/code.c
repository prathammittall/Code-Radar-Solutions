#include <stdio.h>

int main() {
    int age, n;
    scanf("%d %d", &age, &n);

    if (age>=18) {
        printf("Eligible");
    } else {
        printf("Not Eligible");
    }

    return 0;
}