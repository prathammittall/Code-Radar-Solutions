#include <stdio.h>
#include <stdbool.h>

void prime(int arr[], int numInt[], int length) {
    for (int i = 0; i < length; i++) {
        bool isTrue = true;
        int arrNum = arr[i];

        if (arrNum < 2) {
            isTrue = false;
        } else {
            for (int j = 2; j * j <= arrNum; j++) {
                if (arrNum % j == 0) {
                    isTrue = false;
                    break;
                }
            }
        }

        numInt[i] = isTrue ? 1 : 0;
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n], numInt[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    prime(arr, numInt, n);

    for (int j = 0; j < n; j++) {
        printf("%d\n", numInt[j]);
    }

    return 0;
}
