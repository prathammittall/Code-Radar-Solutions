#include <stdio.h>

void bubbleSort(int arr[], int n) {
    for (int turn = 0; turn < n - 1; turn++) {
        for (int j = 0; j < n - 1 - turn; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
