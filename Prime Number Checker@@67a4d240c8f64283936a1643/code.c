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


