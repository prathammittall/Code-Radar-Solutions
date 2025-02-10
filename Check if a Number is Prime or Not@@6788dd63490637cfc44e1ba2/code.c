#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n==1) {
            printf("Not Prime");
        } else if (n==2) {
            printf("Prime");
        } else {
            bool isTrue = true;
            for (int i=2; i<n; i++) {
                if (n%i==0) {
                    isTrue = false;
                    break;
                }
            }
            if (isTrue==true) {
                printf("Prime");
            } else {
                printf("Not Prime");
            }
        }

    return 0;
}