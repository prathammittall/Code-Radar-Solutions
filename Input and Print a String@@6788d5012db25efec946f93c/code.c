#include <stdio.h>

int main() {
    char string[100];
    scanf("%99s", string);

    printf("You entered: %s\n", string);

    return 0;
}