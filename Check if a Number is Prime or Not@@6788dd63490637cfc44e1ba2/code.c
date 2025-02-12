#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n==1) {
            printf("Not Prime");
        } else if (n==2) {
            printf("Prime");
        } else {
            int isTrue = 1;
            for (int i=2; i<n; i++) {
                if (n%i==0) {
                    isTrue = 0;
                    break;
                }
            }
            if (isTrue==1) {
                printf("Prime");
            } else {
                printf("Not Prime");
            }
        }

    return 0;
}