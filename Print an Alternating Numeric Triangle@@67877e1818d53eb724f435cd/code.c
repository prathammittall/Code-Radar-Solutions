#include <stdio.h>

int main() {
    int n, counter=1;
    scanf("%d", &n);

    for (int i=1; i<=n; i++) {
        for (int j=1; j<=i; j++) {
            printf("%d", counter);
            if (counter==1) {
                counter=0;
            } else {
                counter = 1;
            }
        }
        printf("\n");
    }
}