#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    if (b<0){
        printf("False");
    }
    else if (a>b) {
        printf("True");
    } else if (a==b) {
        printf("True");
    }  else {
        printf("True");
    }
    return 0;
}