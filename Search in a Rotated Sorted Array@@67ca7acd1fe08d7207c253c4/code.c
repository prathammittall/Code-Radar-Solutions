#include <stdio.h>

int searchInRotatedArray(int arr[], int n, int target) {
    int start = 0;
    int end = n-1;

    while (start<=end) {
        int mid = (start + end)/2;

        if (mid==target) {
            return mid;
        } else if (mid < target) {
            start = mid+1;
        } else {
            end = mid-1;
        }
        return -1;
    }
}