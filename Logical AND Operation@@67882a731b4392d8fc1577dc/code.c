#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    if (a>b) {
        printf("True");
    } else if (a==b) {
        printf("True");
    } else if (b<0){
        printf("False");
    }
    return 0;
}