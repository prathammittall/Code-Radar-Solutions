#include <stdio.h> 

int findOccurrence(int arr[], int n, int k, char mode){
    if (mode=='F') {
        for (int i=0; i<n; i++){
            if (arr[i] == k){
                return i;
            }
        }
        return -1;
    } else {
        for (int i=n-1; i>=0; i--){
            if (arr[i] == k){
                return i;
            }
        }
        return -1;
    }
}

// int main(){
//     int n;
//     scanf("%d", &n);
    
//     int arr[n];
    
//     for (int i=0; i<n; i++){
//         scanf("%d", &arr[i]);
//     }

//     int k;
//     scanf("%d", &k);

//     char occurence;
//     scanf("%c", &occurence);

//     if (occurence == 'F') {
//         printf("%d\n", first_occurance(arr, n, k));
//     } else {
//         printf("%d\n", last_occurance(arr, n, k));
//     }

//     return 0;
// }