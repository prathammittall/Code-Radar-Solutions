#include <stdio.h>

void bubbleSort(int arr[]) {
    int n = arr.length;
    for (int turn = 0; turn < n-1; turn++) {
        for (int j = 0; j < n-1-turn; j++) {
            if (arr[j] > arr[j+1]) {
                // swap
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i=0; i<arr.length; i++) {
        int arrInp;
        scanf("%d", &arrInp);

        arr[i] = arrInp;
    }
}